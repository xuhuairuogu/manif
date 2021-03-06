#ifndef _MANIF_MANIF_SE_2_3_PROPERTIES_H_
#define _MANIF_MANIF_SE_2_3_PROPERTIES_H_

#include "manif/impl/traits.h"

namespace manif {

// Forward declaration
template <typename _Derived> struct SE_2_3Base;
template <typename _Derived> struct SE_2_3TangentBase;

namespace internal {

//! traits specialization
template <typename _Derived>
struct LieGroupProperties<SE_2_3Base<_Derived>>
{
  static constexpr int Dim = 3; /// @brief Space dimension
  static constexpr int DoF = 9; /// @brief Degrees of freedom
};

//! traits specialization
template <typename _Derived>
struct LieGroupProperties<SE_2_3TangentBase<_Derived>>
{
  static constexpr int Dim = 3; /// @brief Space dimension
  static constexpr int DoF = 9; /// @brief Degrees of freedom
};

} /* namespace internal */
} /* namespace manif */

#endif /* _MANIF_MANIF_SE_2_3_PROPERTIES_H_ */
