#include <stdio.h>
#include <stdlib.h>

int sum(int *x ,int *y)
{
    int add;
    add=*x+*y;
   return add;
}


int main()
{
    int a,b,add;
    printf("Enter the Values :\n");
    scanf("%d%d",&a,&b);
    add=sum(&a,&b);

    printf("sum of a & b is:%d ",add);
    return 0;

}
