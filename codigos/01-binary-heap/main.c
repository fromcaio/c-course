#include <stdio.h>
#include "binary-heap.h" // Assuming your heap functions are defined in this header file

int main() {
    // Create a binary heap
    binary_heap *heap = create_binary_heap(10);

    // Create an array to heapify
    int array[] = {3, 2, 1, 7, 6, 4, 5};
    // sizeof(array) returns the size of the array in bytes
    // sizeof(array[0]) returns the size of the first element in bytes
    int size = sizeof(array) / sizeof(array[0]);

    // Heapify the array
    heapify(heap, array, size);

    // Print the heap
    print_heap(heap);

    // Find the minimum element
    printf("Min: %d\n", find_min(heap));

    // Extract the minimum element
    printf("Extracted: %d\n", extract_min(heap));

    // Print the heap
    print_heap(heap);

    // Delete the minimum element
    delete_min(heap);

    // Print the heap
    print_heap(heap);

    // Replace a node
    replace_node(heap, 3, 8);

    // Print the heap
    print_heap(heap);

    // Check if the heap is empty
    printf("Is empty: %d\n", is_empty(heap));

    // Create another heap to merge
    binary_heap *heap2 = create_binary_heap(10);
    int array2[] = {10, 9, 8};
    heapify(heap2, array2, 3);

    // Merge the two heaps
    binary_heap *merged_heap = merge(heap, heap2);

    // Print the merged heap
    print_heap(merged_heap);

    return 0;
}