//WAP to take Aarray input from user and short then in accending order as per user's choice...

#include <stdio.h>

int main()
{
    int i, j, temp;
    int a[7]= {26, 55, 12, 67, 8, 16, 97};
    for(i=0; i<7; i++)
    {
        for(j=i+1; j<7; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ",a[i]);
    }
    return 0;
}