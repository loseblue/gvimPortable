
echo "cscope create"
find . -name "*.h" -o -name "*.c" -o -name "*.cc" > cscope.files
cscope -bCkR -i cscope.files

echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > lookupfiletags
gfind `$pwd` -type f \( -name "*.[ch]"  -o -name "*.[ch]pp" \) -printf "%f\t%p\t1\n"|sort -f >>lookupfiletags

