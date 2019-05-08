// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// krls_gr_trunc
arma::vec krls_gr_trunc(const arma::mat& U, const arma::vec& D, const arma::vec& y, const arma::vec& w, const arma::vec& fitted, const arma::vec& dhat, const double& lambda);
RcppExport SEXP _KRLS2_krls_gr_trunc(SEXP USEXP, SEXP DSEXP, SEXP ySEXP, SEXP wSEXP, SEXP fittedSEXP, SEXP dhatSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fitted(fittedSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type dhat(dhatSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(krls_gr_trunc(U, D, y, w, fitted, dhat, lambda));
    return rcpp_result_gen;
END_RCPP
}
// krls_hess_trunc
arma::mat krls_hess_trunc(const arma::mat& U, const arma::vec& D, const arma::vec& w, const double& lambda);
RcppExport SEXP _KRLS2_krls_hess_trunc(SEXP USEXP, SEXP DSEXP, SEXP wSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(krls_hess_trunc(U, D, w, lambda));
    return rcpp_result_gen;
END_RCPP
}
// krlogit_fn_trunc
double krlogit_fn_trunc(const arma::vec& par, const arma::mat& U, const arma::vec& D, const arma::vec& y, const arma::vec& w, const double& lambda);
RcppExport SEXP _KRLS2_krlogit_fn_trunc(SEXP parSEXP, SEXP USEXP, SEXP DSEXP, SEXP ySEXP, SEXP wSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(krlogit_fn_trunc(par, U, D, y, w, lambda));
    return rcpp_result_gen;
END_RCPP
}
// krlogit_gr_trunc
arma::vec krlogit_gr_trunc(const arma::vec& par, const arma::mat& U, const arma::vec& D, const arma::vec& y, const arma::vec& w, const double& lambda);
RcppExport SEXP _KRLS2_krlogit_gr_trunc(SEXP parSEXP, SEXP USEXP, SEXP DSEXP, SEXP ySEXP, SEXP wSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(krlogit_gr_trunc(par, U, D, y, w, lambda));
    return rcpp_result_gen;
END_RCPP
}
// partial_logit
arma::vec partial_logit(const arma::mat& K, const arma::vec& coef, const double& beta0);
RcppExport SEXP _KRLS2_partial_logit(SEXP KSEXP, SEXP coefSEXP, SEXP beta0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const double& >::type beta0(beta0SEXP);
    rcpp_result_gen = Rcpp::wrap(partial_logit(K, coef, beta0));
    return rcpp_result_gen;
END_RCPP
}
// krlogit_hess_trunc
arma::mat krlogit_hess_trunc(const arma::vec& par, const arma::mat& U, const arma::vec& D, const arma::vec& y, const arma::vec& w, const double& lambda);
RcppExport SEXP _KRLS2_krlogit_hess_trunc(SEXP parSEXP, SEXP USEXP, SEXP DSEXP, SEXP ySEXP, SEXP wSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(krlogit_hess_trunc(par, U, D, y, w, lambda));
    return rcpp_result_gen;
END_RCPP
}
// mult_diag
arma::mat mult_diag(const arma::mat& x, const arma::vec& d);
RcppExport SEXP _KRLS2_mult_diag(SEXP xSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(mult_diag(x, d));
    return rcpp_result_gen;
END_RCPP
}
// trace_mat
double trace_mat(const arma::mat& x);
RcppExport SEXP _KRLS2_trace_mat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(trace_mat(x));
    return rcpp_result_gen;
END_RCPP
}
// euc_dist
double euc_dist(const arma::rowvec& x1, const arma::rowvec& x2);
RcppExport SEXP _KRLS2_euc_dist(SEXP x1SEXP, SEXP x2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x2(x2SEXP);
    rcpp_result_gen = Rcpp::wrap(euc_dist(x1, x2));
    return rcpp_result_gen;
END_RCPP
}
// kern_gauss_1d
double kern_gauss_1d(const arma::rowvec& x1, const arma::rowvec& x2, const double& b);
RcppExport SEXP _KRLS2_kern_gauss_1d(SEXP x1SEXP, SEXP x2SEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(kern_gauss_1d(x1, x2, b));
    return rcpp_result_gen;
END_RCPP
}
// kern_gauss
arma::mat kern_gauss(const arma::mat& x, const double& b);
RcppExport SEXP _KRLS2_kern_gauss(SEXP xSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(kern_gauss(x, b));
    return rcpp_result_gen;
END_RCPP
}
// new_gauss_kern
arma::mat new_gauss_kern(const arma::mat& newx, const arma::mat& oldx, const double& b);
RcppExport SEXP _KRLS2_new_gauss_kern(SEXP newxSEXP, SEXP oldxSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type newx(newxSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type oldx(oldxSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(new_gauss_kern(newx, oldx, b));
    return rcpp_result_gen;
END_RCPP
}
// pwmfx
Rcpp::List pwmfx(const arma::mat& K, const arma::vec& x, const arma::mat& X, const arma::vec& coefhat, const arma::mat& Vcovc, const arma::vec& p, const double& b, const bool& computevarderiv, const bool& computederiv2);
RcppExport SEXP _KRLS2_pwmfx(SEXP KSEXP, SEXP xSEXP, SEXP XSEXP, SEXP coefhatSEXP, SEXP VcovcSEXP, SEXP pSEXP, SEXP bSEXP, SEXP computevarderivSEXP, SEXP computederiv2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type coefhat(coefhatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Vcovc(VcovcSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const bool& >::type computevarderiv(computevarderivSEXP);
    Rcpp::traits::input_parameter< const bool& >::type computederiv2(computederiv2SEXP);
    rcpp_result_gen = Rcpp::wrap(pwmfx(K, x, X, coefhat, Vcovc, p, b, computevarderiv, computederiv2));
    return rcpp_result_gen;
END_RCPP
}
// solve_for_d_ls
Rcpp::List solve_for_d_ls(const arma::vec& y, const arma::mat& U, const arma::vec& D, const double& lambda);
RcppExport SEXP _KRLS2_solve_for_d_ls(SEXP ySEXP, SEXP USEXP, SEXP DSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_for_d_ls(y, U, D, lambda));
    return rcpp_result_gen;
END_RCPP
}
// solve_for_d_ls_w
Rcpp::List solve_for_d_ls_w(const arma::vec& y, const arma::mat& U, const arma::vec& D, const arma::vec& w, const double& lambda);
RcppExport SEXP _KRLS2_solve_for_d_ls_w(SEXP ySEXP, SEXP USEXP, SEXP DSEXP, SEXP wSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_for_d_ls_w(y, U, D, w, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_KRLS2_krls_gr_trunc", (DL_FUNC) &_KRLS2_krls_gr_trunc, 7},
    {"_KRLS2_krls_hess_trunc", (DL_FUNC) &_KRLS2_krls_hess_trunc, 4},
    {"_KRLS2_krlogit_fn_trunc", (DL_FUNC) &_KRLS2_krlogit_fn_trunc, 6},
    {"_KRLS2_krlogit_gr_trunc", (DL_FUNC) &_KRLS2_krlogit_gr_trunc, 6},
    {"_KRLS2_partial_logit", (DL_FUNC) &_KRLS2_partial_logit, 3},
    {"_KRLS2_krlogit_hess_trunc", (DL_FUNC) &_KRLS2_krlogit_hess_trunc, 6},
    {"_KRLS2_mult_diag", (DL_FUNC) &_KRLS2_mult_diag, 2},
    {"_KRLS2_trace_mat", (DL_FUNC) &_KRLS2_trace_mat, 1},
    {"_KRLS2_euc_dist", (DL_FUNC) &_KRLS2_euc_dist, 2},
    {"_KRLS2_kern_gauss_1d", (DL_FUNC) &_KRLS2_kern_gauss_1d, 3},
    {"_KRLS2_kern_gauss", (DL_FUNC) &_KRLS2_kern_gauss, 2},
    {"_KRLS2_new_gauss_kern", (DL_FUNC) &_KRLS2_new_gauss_kern, 3},
    {"_KRLS2_pwmfx", (DL_FUNC) &_KRLS2_pwmfx, 9},
    {"_KRLS2_solve_for_d_ls", (DL_FUNC) &_KRLS2_solve_for_d_ls, 4},
    {"_KRLS2_solve_for_d_ls_w", (DL_FUNC) &_KRLS2_solve_for_d_ls_w, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_KRLS2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
