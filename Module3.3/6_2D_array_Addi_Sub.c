//WAP to make Addition & Subtraction of two matrix using 2-D Array....

#include <stdio.h>

void sum(int [3][3], int [3][3]);  //function declaration
void sub(int [3][3], int [3][3]);  //function declaration

int main()
{
    int a[3][3], b[3][3], i,j;
    printf("\nEnter First Matrix");
    for(i=0; i<3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter Second Matrix");
    for(i=0; i<3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
        
    sum(a, b);      
    sub(a, b);      
    return 0;
}
void sum (int a[3][3], int b[3][3]) //function callig
{
    int c[3][3],i,j;
    for(i=0; i<3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j]= a[i][j] + b[i][j];
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}
void sub (int a[3][3], int b[3][3])  //function callig
{
    int c[3][3],i,j;
    for(i=0; i<3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j]= a[i][j] - b[i][j];
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}
