#!/bin/sh
cat /etc/passwd | cut -d':' -f1 | awk 'NR%2==0' | rev | sort -r | 