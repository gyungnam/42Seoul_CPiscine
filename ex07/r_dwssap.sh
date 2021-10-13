#!/bin/bash
cat /etc/passwd | grep -v '#' | awk "NR%2==0" | cut -d ":" -f 1 | rev | sort -r | awk -v F1=$FT_LINE1 -v F2=$FT_LINE2 "F1<=NR && NR<=F2" |xargs| sed -e 's/ /, /g' | sed 's/$/./g' | tr -d '\n'
