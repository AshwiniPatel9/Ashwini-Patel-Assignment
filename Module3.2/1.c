// WAP to make simple calculation (+,-,*,/,%)

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);

    printf("Adition of a and b is %d\n:",a+b);
    printf("Subtraction of a and b is %d\n:",a-b);
    printf("Multiplication of a and b is %d\n:",a*b);
    printf("Division of a and b is %d\n:",a/b);
    printf("Modulo of a and b is %d\n:",a%b);


    return 0;

}