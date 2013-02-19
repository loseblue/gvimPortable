echo "cscope create"
#!/bin/sh
rm cscope.* lookupfiletags
gfind /Users/Tingting/loseblue/codes/l4 -name "*.h" -o -name "*.c" -o -name "*.cc" > cscope.files
cscope -Rbkq -i cscope.files

echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > lookupfiletags
gfind `$pwd` -type f \( -name "*.[ch]"  -o -name "*.[ch]pp" \) -printf "%f\t%p\t1\n"|sort -f >>lookupfiletags

