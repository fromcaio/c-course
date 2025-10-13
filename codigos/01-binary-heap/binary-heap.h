// this file contains the binary heap data structure and operations
#ifndef BINAR_HEAP_H
#define BINAR_HEAP_H

// binary heap data structure
typedef struct binary_heap {
    int *array;
    int capacity;
    int size;
} binary_heap;

// Creation functions
binary_heap *create_binary_heap(int capacity);
void heapify(binary_heap *heap, int *array, int size);
binary_heap *merge(binary_heap *heap1, binary_heap *heap2);
binary_heap *meld(binary_heap *heap1, binary_heap *heap2);

// Basic functions
int find_min(binary_heap *heap);
int extract_min(binary_heap *heap);
void delete_min(binary_heap *heap);
void replace_node(binary_heap *heap, int value_to_remove, int value_to_insert);
void insert(binary_heap *heap, int value);

// Inspection functions
int size(binary_heap *heap);
int is_empty(binary_heap *heap);

// Internal functions
void sift_up(binary_heap *heap, int index);
void sift_down(binary_heap *heap, int index);

// Test functions
void print_heap(binary_heap *heap);

#endif // BINAR_HEAP_H