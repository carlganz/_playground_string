#' @useDynLib gostring
#' @export
foobar <- function() {
  .Call("foobar", PACKAGE = "gostring")
}

#' @export
nbytes <- function(s){
  .Call("nbytes", s, PACKAGE = "gostring")
}
