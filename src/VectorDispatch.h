
#ifndef __VectorDispatch_h__
#define __VectorDispatch_h__

#define DISPATCH_VECTOR_METHOD(method, x) \
  switch( TYPEOF(x) ){ \
    case REALSXP: \
      return method<Rcpp::Vector<REALSXP> >(x); \
    case INTSXP: \
      return method<Rcpp::Vector<INTSXP> >(x); \
    case STRSXP: \
      return method<Rcpp::Vector<STRSXP> >(x); \
    case LGLSXP: \
      return method<Rcpp::Vector<LGLSXP> >(x); \
    default: \
      Rcpp::stop("unsupported type"); \
      return x; \
  }

#endif // __VectorDispatch_h__