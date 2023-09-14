// Write a program in C to print all the alphabets using a pointer.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alp='A';
    char *ptr=&alp;
    printf("Alphabets are:\n");
    while(*ptr<='Z')
    {
        printf("%c ",*ptr);

        (*ptr)++;
    }
    return 0;
}
