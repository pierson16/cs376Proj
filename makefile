prog: main.o readLine.o execCmds.o taylorWork.o
	gcc -o prog main.o readLine.o execCmds.o taylorWork.o

main.o: main.c readLine.h execCmds.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

taylorWork.o: taylorWork.c taylorWork.h
	gcc -c taylorWork.c

clean:
	rm -f *.o prog
