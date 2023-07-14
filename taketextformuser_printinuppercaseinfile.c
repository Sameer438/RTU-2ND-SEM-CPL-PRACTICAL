#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[30];
    fp=fopen("file1.txt","w");
    if (fp==NULL)
    {
        printf("File Opening error....\n");
        exit(1);
    }
    printf("Enter a line of text:");
    gets(str);
    fprintf(fp,"%s\n",str);
    fclose(fp);
    fp=fopen("file1.text","r");
    while(!feof(fp))
    printf("%c",to upper(getc(fp)));
    fclose(fp);
    return 0;
}