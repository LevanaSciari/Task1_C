# -*- MakeFile Levana


mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o

mymathd: power.o basicMath.o
	gcc -Wall -g -o libmyMath.so -shared power.o basicMath.o 
power.o: power.c myMath.h
	gcc -Wall -g -c power.c
basicMath.o: basicMath.c myMath.h
	gcc -Wall -g -c basicMath.c

mains: main.o mymaths
	gcc -Wall -g -o mains main.o libmyMath.a
maind: main.o mymathd
	gcc -Wall -g -o maind main.o ./libmyMath.so
main.o: main.c myMath.h
	gcc -c main.c

clean:
	rm -f *.o *.a *.so mains maind

all: mymaths mymathd mains maind main.o power.o basicMath.o

git: 
	git add --all
	git commit -m "Add"
	git push
