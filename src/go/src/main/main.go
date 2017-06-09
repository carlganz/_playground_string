package main

import "C"
import "rstring"

//export Foobar
func Foobar() string {
  return rstring.Foobar() ;
}

//export Nbytes
func Nbytes(s *C.char) int {
  return rstring.Nbytes(C.GoString(s)) ;
}

func main() {}
