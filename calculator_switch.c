#include<stdio.h>
int main()
{
    char operator;
    int n1,n2;
    printf("Enter Operator(+,-,*,/,%):");
    operator=getchar();
    printf("Enter Two Numbers");
    scanf("%d%d", &n1 , &n2);
    //swtich start
    switch (operator)
    {
        case'+':
        printf("Sum=%d\n", n1+n2);
        break;

        case '-':
        printf("Difference=%d\n", n1-n2);
        break;

        case'*':
        printf("Product=%d\n", n1*n2);
        break;

        case'/':
        printf("Quotient=%d\n", n1/n2);
        break;
        
        case'%':
        printf("Remainder=%d\n", n1%n2);
        break;

        default:
        printf("Wrong Input\n");
    }
    //switch end
    return 0;
}