# Define the object files
objects = main.o matriz_linearizada.o matriz_csr.o

# Compilation flags
CFLAGS = -g
CC = gcc

# The default target prog
# is the name of the executable file
prog: $(objects)
	$(CC) $(CFLAGS) $(objects) -o prog

# Individual dependencies
main.o: main.c matriz_linearizada.h matriz_csr.h
	$(CC) $(CFLAGS) -c main.c
matriz_linearizada.o: matriz_linearizada.c matriz_linearizada.h
	$(CC) $(CFLAGS) -c matriz_linearizada.c
matriz_csr.o: matriz_csr.c matriz_csr.h
	$(CC) $(CFLAGS) -c matriz_csr.c

# Clean up
clean:
	rm -rf *.o prog

.PHONY: clean
