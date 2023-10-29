CFLAGS=-Wall -gdb -std=c11 -pedantic
LIBS=`pkg-config --libs sdl2`
genetic_bots: main.c
	$(CC) $(CFLAGAS) -o genetic_bots main.c $(LIBS)
