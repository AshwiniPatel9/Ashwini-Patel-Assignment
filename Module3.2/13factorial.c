// WAP factorial of given number...

#include <stdio.h>

int main()
{
    int i, fact =1, n;
    printf("Enter the value");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d  is %d\n", n, fact);
    return 0;
}