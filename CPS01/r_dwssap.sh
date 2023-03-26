#!/bin/bash
cat /etc/passwd | # cat passwd
	sed '/^#/d' | #delete comment
	cut -f 1 -d ":" | #extract username
	awk '(NR%2==0){print}' | #every other line starting from second line
	rev | #reverse username
	sort -r | #sort reverse
	sed -n "$FT_LINE1 , $FT_LINE2 p" | #extract between FT_LINE1 & FT_LINE2
	sed -e 's/$/, /g' | #replace end of line
	awk '{printf}' | #delete newline
	sed -e 's/, $/./g' | #end with .
	tr -d "\n" #delete new line
