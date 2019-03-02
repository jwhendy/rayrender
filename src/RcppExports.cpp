// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// generate_initial
List generate_initial(int nx, int ny, int ns, float fov, NumericVector lookfromvec, NumericVector lookatvec, float aperture, IntegerVector type, NumericVector radius, NumericVector x, NumericVector y, NumericVector z, List properties, int n, NumericVector& bghigh, NumericVector& bglow);
RcppExport SEXP _rayballer_generate_initial(SEXP nxSEXP, SEXP nySEXP, SEXP nsSEXP, SEXP fovSEXP, SEXP lookfromvecSEXP, SEXP lookatvecSEXP, SEXP apertureSEXP, SEXP typeSEXP, SEXP radiusSEXP, SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP propertiesSEXP, SEXP nSEXP, SEXP bghighSEXP, SEXP bglowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nx(nxSEXP);
    Rcpp::traits::input_parameter< int >::type ny(nySEXP);
    Rcpp::traits::input_parameter< int >::type ns(nsSEXP);
    Rcpp::traits::input_parameter< float >::type fov(fovSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lookfromvec(lookfromvecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lookatvec(lookatvecSEXP);
    Rcpp::traits::input_parameter< float >::type aperture(apertureSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< List >::type properties(propertiesSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type bghigh(bghighSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type bglow(bglowSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_initial(nx, ny, ns, fov, lookfromvec, lookatvec, aperture, type, radius, x, y, z, properties, n, bghigh, bglow));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rayballer_generate_initial", (DL_FUNC) &_rayballer_generate_initial, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_rayballer(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
