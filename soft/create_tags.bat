REM  del cscope.out cscope.files
REM  echo del "cscope.out cscope.files tags" successful!

REM  echo "ctags create"
REM  ctags --languages=c --langmap=c:+.h --extra=+q -R

echo "cscope create"
vim_find . -name "*.h" -o -name "*.c" > cscope.files
cscope -bCkR -i cscope.files

@echo off
bash lookupfile_genTags_windows.sh

pause

