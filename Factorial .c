//Write a program in C to find the factorial of a given number using pointers.
#include <stdio.h>
#include <stdlib.h>

int fact(int *a,int *res)

{
    *res=1;
    for(int i=1;i<=*a;i++)
    {
     *res*=i;
    }

}
int main()
{
    int n,res;
    printf("Enter the number:\n");
    scanf("%d",&n);
    fact(&n,&res);
    printf("The factorial of %d id %d",n,res);
    return 0;
}
