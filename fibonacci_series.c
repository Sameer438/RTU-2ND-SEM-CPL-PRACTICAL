#include<stdio.h>
int main()
{
    int n, i=1,f=0,s=1,next;
    printf("Enetr the number of terms:");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%4d",f);
        next=f+s;
        f=s;
        s=next;
        i++;
    }
    return 0;

}