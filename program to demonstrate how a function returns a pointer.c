// Write a C program to demonstrate how a function returns a pointer

#include <stdio.h>

// Function that returns a pointer to an integer
int* createInteger(int value)
 {
    int* ptr = (int*)malloc(sizeof(int)); // Allocate memory for an integer
    if (ptr != NULL)
        {
        *ptr = value; // Set the value at the memory location pointed to by ptr
    }
    return ptr; // Return the pointer
}

int main()
 {
    int* result = createInteger(42); // Call the function to create an integer with value 42
    if (result != NULL)
        {
        printf("The value at the pointer is: %d\n", *result);
        free(result); // Free the allocated memory when done
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
