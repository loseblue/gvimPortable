del cscope.out cscope.files tags
echo del "cscope.out cscope.files tags" successful!

REM  echo "ctags create"
REM  ctags --languages=c --langmap=c:+.h --extra=+q -R

echo "cscope create"
vim_find . -name "*.h" -o -name "*.c" -o -name "*.cc" > cscope.files
cscope -bCkR -i cscope.files

@echo off
bash lookupfile_genTags_windows.sh

pause

