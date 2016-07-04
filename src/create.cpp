#include <Rcpp.h>
#include "typedef.h"
using namespace Rcpp;

template <typename T>
static inline SEXP fill(std::vector < std::string > &key, std::vector < T > &value)
{
  radix_tree<std::string, T> radix;
  for(unsigned int i = 0; i < key.size(); i++){
    radix[key[i]] = value[i];
  }
  
  XPtrRadix<T> ptr(&radix);
  return ptr;
}

//[[Rcpp::export]]
SEXP radix_create_str(std::vector < std::string > key, std::vector < std::string > value){
  return fill(key, value);
}

//[[Rcpp::export]]
SEXP radix_create_int(std::vector < std::string > key, std::vector < int > value){
  return fill(key, value);
}

//[[Rcpp::export]]
SEXP radix_create_double(std::vector < std::string > key, std::vector < double > value){
  return fill(key, value);
}

//[[Rcpp::export]]
SEXP radix_create_bool(std::vector < std::string > key, std::vector < bool > value){
  return fill(key, value);
}
