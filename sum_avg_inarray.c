#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    float avg;
    printf("Ente 10 Numbers:");
    for (i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
        sum= sum+arr[i];
    }
    avg=(float) sum/10;
    printf("sum=%d\n",sum);
    printf("average=%.2f\n", avg);

    return 0;
}