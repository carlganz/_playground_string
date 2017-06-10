#include <R.h>
#include <Rinternals.h>
#include "_cgo_export.h"

SEXP foobar(){
  GoString res = Foobar() ;
  return ScalarString(mkCharLenCE( res.p, res.n, CE_UTF8 )) ;
}

SEXP nbytes(SEXP x){
  char* s = (char*) CHAR(STRING_ELT(x, 0)) ;
  int n = Nbytes(s) ;
  return ScalarInteger(n) ;
}
