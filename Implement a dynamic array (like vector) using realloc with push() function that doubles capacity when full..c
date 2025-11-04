#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;       // Pointer to the array
    int size;        // Number of elements currently in the array
    int capacity;    // Allocated capacity
} DynamicArray;

// Initialize the dynamic array
void initArray(DynamicArray *arr, int initialCapacity) {
    arr->data = (int *)malloc(initialCapacity * sizeof(int));
    arr->size = 0;
    arr->capacity = initialCapacity;
}

// Push a new element into the array
void push(DynamicArray *arr, int value) {
    if (arr->size == arr->capacity) {
        // Double the capacity
        arr->capacity *= 2;
        arr->data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
        if (arr->data == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
    }
    arr->data[arr->size++] = value;
}

// Free the array memory
void freeArray(DynamicArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

// Example usage
int main() {
    DynamicArray arr;
    initArray(&arr, 2); // Start with capacity 2

    for (int i = 0; i < 10; i++) {
        push(&arr, i);
        printf("Pushed %d, size: %d, capacity: %d\n", i, arr.size, arr.capacity);
    }

    freeArray(&arr);
    return 0;
}
