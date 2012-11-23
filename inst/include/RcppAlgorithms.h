
#ifndef __RcppAlgorithms_h__
#define __RcppAlgorithms_h__

#include <Rcpp.h>

namespace RcppAlgorithms {

template<typename V>
V unique2(const V& vector) {
    RCPP_UNORDERED_SET<typename V::stored_type> set(vector.begin(), vector.end());
    return V(set.begin(), set.end()) ;
}

} // namespace RcppAlgorithms

#endif // __RcppAlgorithms_h__