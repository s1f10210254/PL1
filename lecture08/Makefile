
bank: app.o bank.o
	gcc -Wall app.o bank.o -o bank

app.o: app.c bank.h
	gcc -c Wall app.c -o app.o

bank.o: bank.c bank.h
	gcc -c Wall bank.c -o bank.o