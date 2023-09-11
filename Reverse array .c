//Write a program in C to print the elements of an array in reverse order.
                                                                                                                                                                                                                                                     
#include <stdio.h>
#include <stdlib.h>

void rev(int n, int *a);

int main() {
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array:\n");
    rev(n, a);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}           

void rev(int n, int *a) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

