PGM=scorebook
FILES=main.c
CFLAGS=-Wall
LFLAGS=
GTK=`pkg-config --cflags --libs gtk+-2.0`
GCC=gcc

$(PGM):$(FILES)
	$(GCC) $(CFLAGS) $(FILES) -o $(PGM) $(GTK)

clean: 
	rm -rf $(PGM)

