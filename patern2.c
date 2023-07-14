#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Total Lines:");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf("\n");
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
    }
    return 0;
}