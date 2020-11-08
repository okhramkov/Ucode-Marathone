if [ $1 = '-c' ]
then
	tar -cf $2 ${*:3}
else [ $1 = '-e' ]
	tar -xf $2
fi
