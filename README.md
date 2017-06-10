## gostring

This is a companion repo for this blog post: https://romain.rbind.io/blog/2017/06/10/using-go-strings-in-r/

```
> install_github("rstats-go/_playground_string", force = TRUE)
Using GitHub PAT from envvar GITHUB_PAT
Downloading GitHub repo rstats-go/_playground_string@master
from URL https://api.github.com/repos/rstats-go/_playground_string/zipball/master
Installing gostring
'/Library/Frameworks/R.framework/Resources/bin/R' --no-site-file --no-environ  \
  --no-save --no-restore --quiet CMD INSTALL  \
  '/private/var/folders/9k/s6066bbx22s7g9gy6sg4qy3w0000gn/T/RtmpFDLmNH/devtools120cc638891ec/rstats-go-_playground_string-dd417b7'  \
  --library='/Library/Frameworks/R.framework/Versions/3.4/Resources/library'  \
  --install-tests

* installing *source* package ‘gostring’ ...
** libs
rm -f *.h
CGO_CFLAGS="-I/Library/Frameworks/R.framework/Resources/include -DNDEBUG   -I/usr/local/include" CGO_LDFLAGS="  -F/Library/Frameworks/R.framework/.. -framework R" GOPATH=/private/var/folders/9k/s6066bbx22s7g9gy6sg4qy3w0000gn/T/RtmpFDLmNH/devtools120cc638891ec/rstats-go-_playground_string-dd417b7/src/go  go build -o gostring.so -buildmode=c-shared main
installing to /Library/Frameworks/R.framework/Versions/3.4/Resources/library/gostring/libs
** R
** preparing package for lazy loading
** help
*** installing help indices
** building package indices
** testing if installed package can be loaded
* DONE (gostring)
>
> gostring::foobar()
[1] "foobar"
>
> gostring::nbytes("foo")
[1] 3
```
