#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int count[26],i;
int main(void)
{
    FILE *fp;
    fp=fopen("string.txt","r");
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        ch=toupper(ch);
        if(ch>='A'&&ch<='Z')
            count[ch-'A']++;
    }
   for(i=0;i<26;i++)
    printf("%c occurred %d times\n ",i+'A',count[i]);
   fclose(fp);
}
