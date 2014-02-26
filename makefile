prog: main.o readLine.o execCmds.o strcmpOrder.o lengthOrder.o
	gcc -o prog main.o readLine.o execCmds.o strcmpOrder.o lengthOrder.o

main.o: main.c readLine.h execCmds.h strcmpOrder.h lengthOrder.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

strcmpOrder.o: strcmpOrder.c strcmpOrder.h
	gcc -c strcmpOrder.c

lengthOrder.o: lengthOrder.c lengthOrder.h
	gcc -c lengthOrder.c

clean:
	rm -f *.o prog
