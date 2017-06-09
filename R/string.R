#' Doubles an integer using go
#'
#' @useDynLib gostring
#' @export
gostring <- function() {
  .Call("gostring", PACKAGE = "gostring")
}

#' @export
nbytes <- function(s){
  .Call("nbytes", s, PACKAGE = "gostring")
}
