//WAP to Reverse a string using Recursion...

#include<stdio.h>
#include<string.h>

void rev(char *s);

int main()
{
    char s[]= "AshWini";
    rev(s);
    printf("\n");

    return 0;
}

void rev(char *s)
{
    if(*s != '\0')
    {
        rev(s+1);
        printf("%c",*s);
    }
}