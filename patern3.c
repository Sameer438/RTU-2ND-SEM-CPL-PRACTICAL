#include<stdio.h>
int main()
{
    int i,j,n;
    char ch="A";
    printf("Enter Total Lines:");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf("\n");
        for (j=1; j<=i; j++)
        {
            printf("%c",ch);
        }
        ch++;
    }
return 0;
}