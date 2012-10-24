del cscope.out cscope.files tags
echo del "cscope.out cscope.files tags" successful!

echo "ctags create"
ctags --languages=c --langmap=c:+.h --extra=+q -R

echo "cscope create"
dir /s /b *.c *.h > cscope.files
cscope -bCkR -i cscope.files
