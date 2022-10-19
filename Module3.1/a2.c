// WAP to make simple calculation (+,-,*,/,%)

#include<stdio.h>

int main()
{
    int a=10,b=30;

    printf("Addition of %d and %d is %d\n\n",a,b,a+b);
    printf("Subtraction of %d and %d is %d\n\n",a,b,a-b);
    printf("Multiplication of %d and %d is %d\n\n",a,b,a*b);
    printf("Division of %d and %d is %d\n\n",a,b,a/b);
    
    printf("Modulo of %d and %d is %d\n",a,b,a%b);

    return 0;

}