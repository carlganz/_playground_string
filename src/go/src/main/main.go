package main

import "C"
import "rstring"

//export Foobar
func Foobar() string {
  return rstring.Foobar() ;
}

//export Nbytes
func Nbytes(s string ) int {
  return rstring.Nbytes(s) ;
}

func main() {}
