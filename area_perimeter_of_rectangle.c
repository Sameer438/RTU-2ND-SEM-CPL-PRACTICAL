#include<stdio.h>
int main()
{
    int l, b, area, perimeter;
    printf("Enter Leanth:");
    scanf("%d", &l);
    printf("Enter Breath");
    scanf("%d", &b);
    area= l*b;
    printf("Area=%d\n",area);
    perimeter=2*(l+b);
    printf("Perimeter=%ld\n", perimeter);

    return 0;
}