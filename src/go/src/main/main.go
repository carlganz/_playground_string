package main

import "C"
import "rstring"

//export Foobar
func Foobar() string {
  return rstring.Foobar() ;
}

func main() {}
