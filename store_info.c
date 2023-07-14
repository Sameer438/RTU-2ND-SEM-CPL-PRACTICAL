#include<stdio.h>
struct student
{
    char name[30];
    int roll;
    float per;
} 
s[5];
int main()
{
    int i;
    printf("enter information of student");
    for (i=0; i<5;++i)
    {
        s[i].roll=i+1;
        printf("roll number%d\n",s[i].roll);
        printf("enter name of student\n");
        scanf("%s", s[i].name);
        printf("enter persentage:\n");
        scanf("%f",&s[i].per);
    }
printf("displaying information:\n\n");
for(i=0; i<5;++i)
{
    if (s[i].per>70)
    {
        printf("\n roll number:%d\n", i+1);
        printf("name:%s\n", s[i].name);
        printf("percentage:%f\n", s[i].per);
    }
    
}
return 0;
}