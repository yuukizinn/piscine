#!/bin/bash

#echo $FT_NBR1
#echo $FT_NBR2
#echo -----
num1=`echo $FT_NBR1 | sed "s/\'/0/g" | sed 's/\\\\/1/g' | sed 's/\"/2/g' | sed 's/\?/3/g' | sed 's/!/4/g'`
num2=`echo $FT_NBR2 | tr "mrdoc" "01234"`
num3=`echo "obase=5;ibase=5;$num1+$num2" | bc`

echo "obase=13;ibase=5;$num3" | bc | tr "0123456789ABC" "gtaio\ luSnemf"
