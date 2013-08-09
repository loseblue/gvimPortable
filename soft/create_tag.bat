REM  del cscope.out cscope.files
REM  echo del "cscope.out cscope.files tags" successful!

REM  echo "ctags create"
REM  ctags --languages=c --langmap=c:+.h --extra=+q -R

REM  echo "cscope create"
REM  vim_find . -name "*.h" -o -name "*.c" > cscope.files
REM  cscope -bCkR -i cscope.files

echo "gtags create"
vim_find . -name "*.[ch]" > gtags.files
gtags

pause

