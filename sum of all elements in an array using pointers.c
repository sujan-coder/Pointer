//Write a program in C to compute the sum of all elements in an array using pointers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50];
    int n,i,sum;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    sum=ptr(&n, &a);
    printf("sum=:%d",sum);

    return 0;
}
int ptr(int *x,int *y)

{
    int sum;
   for(int i=0;i<=*x;i++)
   {
       sum+=y[i];
   }
return sum;
}
