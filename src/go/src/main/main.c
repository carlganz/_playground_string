#define USE_RINTERNALS
#include <R.h>
#include <Rinternals.h>
#include "_cgo_export.h"

SEXP foobar(){
  GoString res = Foobar() ;
  return ScalarString(mkCharLenCE( res.p, res.n, CE_UTF8 )) ;
}

SEXP nbytes(SEXP x){
  SEXP sx = STRING_ELT(x, 0);
  GoString gos = { (char*) CHAR(sx), SHORT_VEC_LENGTH(sx) };
  return ScalarInteger( Nbytes(gos) ) ;
}
