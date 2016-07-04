#ifndef TRIEBEARD_TYPEDEF_H_
#define TRIEBEARD_TYPEDEF_H_

#include <radix.h>

template <typename T>
void finaliseRadix(radix_tree <std::string, T>* radix_inst){}

template <typename T>
using XPtrRadix = Rcpp::XPtr<radix_tree <std::string, T>, Rcpp::PreserveStorage, finaliseRadix<T> >;

#endif
