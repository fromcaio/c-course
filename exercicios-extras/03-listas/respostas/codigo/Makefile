# Define the object files
objects = main.o listaprioridade.o

# Compilation flags
CFLAGS = -g

# The default target prog
# is the name of the executable file
prog: $(objects)
	gcc $(CFLAGS) $(objects) -o prog

# Individual dependencies
main.o: main.c listaprioridade.h
	gcc $(CFLAGS) -c main.c
listaprioridade.o: listaprioridade.c listaprioridade.h
	gcc $(CFLAGS) -c listaprioridade.c

# Clean up
clean:
	rm -rf *.o prog