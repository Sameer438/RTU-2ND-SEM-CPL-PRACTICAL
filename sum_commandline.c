#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*args[])
{
    int sum;
    if(argc!=3)
    {
        printf("wrong data...\n");
        return 0;
    }
    sum=atoi(args[1])+atoi(args[2]);
    printf("sum=%d\n",sum);
    return 0;
}