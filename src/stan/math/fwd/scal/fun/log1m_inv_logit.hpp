#ifndef STAN__MATH__FWD__SCAL__FUN__LOG1M_INV_LOGIT_HPP
#define STAN__MATH__FWD__SCAL__FUN__LOG1M_INV_LOGIT_HPP

#include <stan/math/fwd/core/fvar.hpp>
#include <stan/math/prim/scal/meta/traits.hpp>
#include <stan/math/prim/scal/fun/log1m_inv_logit.hpp>

namespace stan {

  namespace agrad {

    template <typename T>
    inline
    fvar<T>
    log1m_inv_logit(const fvar<T>& x) {
      using std::exp;
      using stan::math::log1m_inv_logit;
      return fvar<T>(log1m_inv_logit(x.val_),
                     -x.d_ / (1 + exp(-x.val_)));
    }
  }
}
#endif
