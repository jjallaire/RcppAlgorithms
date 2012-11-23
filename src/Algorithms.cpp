

#include <RcppAlgorithms.h>

#include "VectorDispatch.h"

// [[Rcpp::export]]
SEXP unique2(SEXP x) {
  DISPATCH_VECTOR_METHOD(RcppAlgorithms::unique2, x)
}
