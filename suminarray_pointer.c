//not working
#include<stdio.h>
#define MAX 100
int add(int* ,int );
int main()
{
    int n,i,s,arr[MAX];

printf("Enter the size of an array:");
scanf("%d", &n);

printf("Enter %d numbers:",n);
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
s=add(arr,n);

printf("sum of elements of an array:%d\n",s);
return 0;
}

int add(int *ptr , int size)
{
    int i,s=0;

    for (i=0;i<size;i++)
    s=(s+*(ptr+i));

    return s;
}

