//write a program in C to sort an array using a pointer.

#include <stdio.h>
#include <stdlib.h>
int sort(int *n,int *ptr)
{
    int temp,i,j;
    printf("sorted output:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+j)<(*(ptr+i)))
                {
                   temp=*(ptr+i);
                  *(ptr+i)=*(ptr+j);
                  *(ptr+j)=temp;
                }
        }
        printf("%d ",*(ptr+i));
    }

}
int main()
{
    int arr[50],n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    sort(n,arr);
    return 0;
}
