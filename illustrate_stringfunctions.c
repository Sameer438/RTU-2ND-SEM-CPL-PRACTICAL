#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30], str 2[30];
    unsigned long len;
    printf("enter first string:");
    scanf("%s\n",str1);
    len= strlen(str1);
    printf("total characters in str1=%lu\n",len);
    
    printf("enter second string:");
    scanf("%s",str2);
    len=strlen(str2);
    printf("total charcters in str2=%lu\n",len);

    strcpy(str2, str1);
    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);

    if (strcmp(str1,str2)==0)
    print("both str1 and str2 are same\n");

    strcat(str1,"hello");
    printf("total char in str1=%lu\n",strlen(str1));

    if(strcmp(srt1,str2)>0)
    printf("str2 comes before srt1\n");
    else
    print("str1 comes before str2\n");
    return 0; 
}