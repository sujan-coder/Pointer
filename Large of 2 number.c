#include <stdio.h>
#include <stdlib.h>

int larg(int *x,int *y)
{
    int flag;
    if(*x==*y)
    {
       return flag=0;
    }
    else if(*x>*y)
    {
        return flag=1;
    }
    else
    {
        return flag=2;
    }

}



int main()
{
    int a,b,flag;
    printf("Enter the numbers:\n");
    scanf("%d%d",&a,&b);
    flag=larg(&a,&b);
    if(flag==1)
    {
    printf("%d is greater than %d",a,b);
    }
    else if(flag==0)
    {
        printf("equal");
    }
    else if (flag==2)
        {
            printf("%d is greater than %d",b,a);
        }
    return 0;
}
