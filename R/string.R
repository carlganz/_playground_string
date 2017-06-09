#' Doubles an integer using go
#'
#' @useDynLib gostring
#' @export
gostring <- function() {
  .Call("gostring", PACKAGE = "gostring")
}
