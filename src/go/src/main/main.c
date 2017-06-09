#include <R.h>
#include <Rinternals.h>
#include "_cgo_export.h"

SEXP gostring(){
  SEXP s = PROTECT(Rf_allocVector(STRSXP, 1)) ;
  GoString res = Foobar() ;
  SET_STRING_ELT(s, 0, Rf_mkCharLen( res.p, res.n )) ;
  UNPROTECT(1) ;
  return s ;
}
