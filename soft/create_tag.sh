echo "cscope create"
#!/bin/sh
rm cscope.*
gfind /Users/Tingting/loseblue/codes/l4 -name "*.h" -o -name "*.c" -o -name "*.cc" > cscope.files
cscope -Rbkq -i cscope.files


