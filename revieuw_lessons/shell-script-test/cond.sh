#!/bin/bash
echo "Enter a number :"
read number
echo "the number is " $number
#if [ $number -gt 50 ]
#then

#	echo "the number is postive"

#else
#	echo "the number is negative"
#fi

[ $number -gt 50 ] && echo "he passed" || echo "he fail"
#autre methode de ecrire unn condition
[ $number -eq 80 ] && echo "he got 80"
[ $number -eq 60 ] && echo "he got 60"

echo "Enter a number :"
read number
echo "the number is " $number
case $number in
	1) echo "he enter one "
		;;
	2) echo "he enter two"
		;;
	3) echo "he enter three"
		;;
	*) echo "you are out in the range"
esac
