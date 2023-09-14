//Write a program in C to print a string in reverse using a pointer.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int len;
    char *ptr=s;
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    len=strlen(s);
    for(int i=len-1;i>=0;i--){
    printf("%c",*(ptr+i));
    }
    return 0;
}
