//Write a program in C to calculate the length of a string using a pointer.

#include <stdio.h>
#include <stdlib.h>
int strlen(char*);
int strlen(char *p)
{
    int count=0;
    while(*p!='\0')   // The condition (*p != '\0') checks if the character p is currently pointing to is not the null character ('\0').
    {
        count++;
        p++;
    }
    return count;

}


int main()
{
    char str[20];
    printf("Enter the string:\n");
    scanf("%s",str);
    int len=strlen(str);
    printf("length of the string [%d] is :%d ",str,len);
    return 0;
}
