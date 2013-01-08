#! /bin/sh 
# generate tag file for lookupfile plugin
#get current workspace absolute path in windows
curpath=$(echo `pwd` | sed -e 's/^\/\([a-z]\)/\1:/g') 
echo $curpath

echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > lookupfiletags
vim_find `$curpath` -type f \( -name "*.[ch]"  -o -name "*.[ch]pp" \) -printf "%f\t%p\t1\n"|vim_sort -f >>lookupfiletags


#example
# echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > filenametags
# find . -not -regex '.*\.\(png\|gif\)' -type f -printf "%f\t%p\t1\n" | \ sort -f >> filenametags

