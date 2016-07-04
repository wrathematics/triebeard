// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// radix_create_str
SEXP radix_create_str(std::vector < std::string > key, std::vector < std::string > value);
RcppExport SEXP triebeard_radix_create_str(SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type key(keySEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type value(valueSEXP);
    __result = Rcpp::wrap(radix_create_str(key, value));
    return __result;
END_RCPP
}
// radix_create_int
SEXP radix_create_int(std::vector < std::string > key, std::vector < int > value);
RcppExport SEXP triebeard_radix_create_int(SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type key(keySEXP);
    Rcpp::traits::input_parameter< std::vector < int > >::type value(valueSEXP);
    __result = Rcpp::wrap(radix_create_int(key, value));
    return __result;
END_RCPP
}
// radix_create_double
SEXP radix_create_double(std::vector < std::string > key, std::vector < double > value);
RcppExport SEXP triebeard_radix_create_double(SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type key(keySEXP);
    Rcpp::traits::input_parameter< std::vector < double > >::type value(valueSEXP);
    __result = Rcpp::wrap(radix_create_double(key, value));
    return __result;
END_RCPP
}
// radix_create_bool
SEXP radix_create_bool(std::vector < std::string > key, std::vector < bool > value);
RcppExport SEXP triebeard_radix_create_bool(SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type key(keySEXP);
    Rcpp::traits::input_parameter< std::vector < bool > >::type value(valueSEXP);
    __result = Rcpp::wrap(radix_create_bool(key, value));
    return __result;
END_RCPP
}