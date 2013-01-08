#!/bin/sh
#generate tag file for lookupfile plugin
echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > lookupfiletags
find `$pwd` -type f \( -name "*.[ch]"  -o -name "*.[ch]pp" \) -printf "%f\t%p\t1\n"|vim_sort -f >>lookupfiletags

#example
#!/bin/sh
#generate tag file for lookupfile plugin
# echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > filenametags
# find . -not -regex '.*\.\(png\|gif\)' -type f -printf "%f\t%p\t1\n" | \ sort -f >> filenametags

