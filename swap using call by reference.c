//.Write a program in C to swap elements using call by reference.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the numbers A & B:\n");
    scanf("%d%d",&a,&b);
    int aswap=swap(&a,&b);
    printf("After swapping:A=%d B=%d",a,b);
    return 0;
}

int swap(int *x, int *y)
{
    int temp;
    if (*x!=*y)
    {
        temp=*x;
        *x=*y;
        *y=temp;

    }

}
