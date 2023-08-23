//Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
#include <stdlib.h>

int vc(char *str)
{
   int v=0;
    int c=0;
     char ch;
    for(int i=0;str[i]!='\0';i++)
    {
        ch=str[i];
        if (ch == 'a'|| ch == 'e'|| ch == 'o' || ch == 'u' || ch =='i'|| ch =='A' || ch =='O' || ch =='I' || ch =='E' || ch =='U' )
        {
            v++;
        }
        else if(ch==' ')
        {
            continue;
        }
        else
        {
            c++;
        }

    }
  printf("Vowels=%d\nConsonants=%d",v,c);


}
int main()
{
    char *ptr[50];
    int v,c;
    printf("Enter the characters:\n");
    scanf("%s",&ptr);
    vc(ptr);
    return 0;
}
