#find -iname "*~" -or -iname "*#*#" -delete
find  \( -name '*~' -or -name '#*#' \) -exec rm "{}" \;