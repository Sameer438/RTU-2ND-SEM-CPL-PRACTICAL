#include<stdio.h>
int fact(int n);
int main()
{
    int num,sum;
    printf("enter the numbe");
    scanf("%d",&num);
    sum=fact(num);
    printf("sum=%d", sum);
}
int fact (int n)
{
    if (n!=0)
    return (n*fact(n-1));
    else
    return 1;
}