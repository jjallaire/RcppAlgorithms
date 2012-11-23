

// [[Rcpp::depends(RcppAlgorithms)]]

#include <RcppAlgorithms.h>

using namespace Rcpp;

// [[Rcpp::export]]
List callUnique(NumericVector vNum, IntegerVector vInt, CharacterVector vChar) {
    
    using namespace RcppAlgorithms;
    
    return List::create(_["numeric"]   = unique2(vNum),
                        _["integer"]   = unique2(vInt),
                        _["character"] = unique2(vChar));
    
}


/*** R

vNum <- c(1.0, 2.4, 2.4, 1.0)
vInt <- c(1, 2, 2, 2, 3, 4, 4)
vChar <- c("foo", "bar", "foo")

# call from C++ (uses types resolved at compile-time for dispatch)
callUnique(vNum, vInt, vChar)

# call from R (uses SEXP switch/case at runtime for dispatch)
library(RcppAlgorithms)
unique2(vNum)
unique2(vInt)
unique2(vChar)

*/
