# Define the object files
objects = main.o binary-heap.o binary-heap.h

# The default target prog
# is the name of the executable file
prog: $(objects)
	gcc $(objects) -o prog

# Individual dependencies
main.o: main.c binary-heap.h
	gcc -c main.c
binary-heap.o: binary-heap.c binary-heap.h
	gcc -c binary-heap.c

# Clean up
clean:
	rm -rf *.o prog