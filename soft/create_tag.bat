del cscope.out cscope.files
echo del "cscope.out cscope.files tags" successful!

echo "ctags create"
ctags --languages=c --langmap=c:+.h --extra=+q -R

echo "cscope create"
vim_find . -name "*.h" -o -name "*.c" > cscope.files
cscope -bCkR -i cscope.files

pause

