#include <pybind11/pybind11.h>
#include <pybind11/operators.h>
#include <pybind11/eigen.h>
#include <pybind11/stl.h>

#include "manif/SE3.h"

#include "bindings_optional.h"
#include "bindings_lie_group_base.h"
#include "bindings_tangent_base.h"

void wrap_SE3(pybind11::module &m)
{
  pybind11::class_<manif::LieGroupBase<manif::SE3d>, std::unique_ptr<manif::LieGroupBase<manif::SE3d>, py::nodelete>> SE3_base(m, "SE3Base");
  pybind11::class_<manif::TangentBase<manif::SE3Tangentd>, std::unique_ptr<manif::TangentBase<manif::SE3Tangentd>, py::nodelete>> SE3_tan_base(m, "SE3TangentBase");

  pybind11::class_<manif::SE3d, manif::LieGroupBase<manif::SE3d>> SE3(m, "SE3");
  pybind11::class_<manif::SE3Tangentd, manif::TangentBase<manif::SE3Tangentd>> SE3_tan(m, "SE3Tangent");

  wrap_lie_group_base<manif::SE3d, manif::LieGroupBase<manif::SE3d>>(SE3);
  wrap_tangent_base<manif::SE3Tangentd, manif::TangentBase<manif::SE3Tangentd>>(SE3_tan);
}
