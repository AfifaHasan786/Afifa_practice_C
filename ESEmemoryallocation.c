#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr; // Pointer to the first element of the array
    int initial_size, additional_size, total_size;
    
    // Get initial size and additional size from the user
    printf("Enter the initial size of the array: ");
    scanf("%d", &initial_size);
    
    printf("Enter the additional size to be added: ");
    scanf("%d", &additional_size);
    
    // Calculate the total size
    total_size = initial_size + additional_size;
    
    // Dynamically allocate memory for the initial size of the array
    arr = (int*)malloc(initial_size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with failure code
    }
    
    // Initialize the array with some values
    for ( int i = 0; i < initial_size; i++) {
        arr[i] = (i+1) * 10; // Assigning some values (e.g., multiples of 10)
    }
    
    // Display the values of the array
    printf("Values of the array after initialization:\n");
    for (int i = 0; i < initial_size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // Resize the array by adding additional elements
    arr = (int*)realloc(arr, total_size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit with failure code
    }
    
    // Initialize the additional elements with some values
    for (int i = initial_size; i < total_size; i++) {
        arr[i] = (i+1 )* 10; // Assigning some values (e.g., multiples of 10)
    }
    
    // Display the values of the array after resizing
    printf("Values of the array after resizing:\n");
    for (int i = 0; i < total_size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // Free the allocated memory
    free(arr);
    
    return 0; // Exit with success code
}
