//Write a program in C to find the maximum and minimum elements in an array.

#include <stdio.h>
#include <stdlib.h>
int m(int n,int ptr[],int *max,int *min);

int main()
{
    int n,i,min,max;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    //int min,max;
     m(n,a, &max, &min);
    printf("Max=%d Min=%d",max,min);
    return 0;
}

int m(int n,int ptr[],int *max,int *min)
{
    int i;
     *max=ptr[0];
     *min=ptr[0];

    for(i=1;i<n;i++)
    {
        if (ptr[i]>*max)
        {
            *max=ptr[i];
        }
        else if (ptr[i]<*min)
        {
            *min=ptr[i];
        }
    }


}


