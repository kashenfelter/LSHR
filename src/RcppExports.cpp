// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hashfun_1
Rcpp::IntegerVector hashfun_1(IntegerVector vec, int cores);
RcppExport SEXP LSHR_hashfun_1(SEXP vecSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    __result = Rcpp::wrap(hashfun_1(vec, cores));
    return __result;
END_RCPP
}
// get_minhash_matrix
IntegerVector get_minhash_matrix(int unique_shingles_length, uint32_t hashfun_number, int cores);
RcppExport SEXP LSHR_get_minhash_matrix(SEXP unique_shingles_lengthSEXP, SEXP hashfun_numberSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type unique_shingles_length(unique_shingles_lengthSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type hashfun_number(hashfun_numberSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    __result = Rcpp::wrap(get_minhash_matrix(unique_shingles_length, hashfun_number, cores));
    return __result;
END_RCPP
}
// get_tdm_character
List get_tdm_character(List sets);
RcppExport SEXP LSHR_get_tdm_character(SEXP setsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sets(setsSEXP);
    __result = Rcpp::wrap(get_tdm_character(sets));
    return __result;
END_RCPP
}
// get_tdm_integer
List get_tdm_integer(List sets);
RcppExport SEXP LSHR_get_tdm_integer(SEXP setsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sets(setsSEXP);
    __result = Rcpp::wrap(get_tdm_integer(sets));
    return __result;
END_RCPP
}
