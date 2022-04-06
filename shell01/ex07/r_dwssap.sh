#!/bin/sh
cat /etc/passwd | cut -d':' -f1 | awk 'NR%2==0' | rev | sort -r | sed -n "/$FT_LINE1/,/$FT_LINE2/p"| sed ':a;N;s/\n/, /;ba' | tr '\n' '.'
