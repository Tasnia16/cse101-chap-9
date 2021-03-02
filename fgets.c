#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    /*FILE *fp;int i;
    char x[100];
    gets(x);
    fp=fopen("string.txt","w");
    fputs(x,fp);
    fclose(fp);
    fp=fopen("string.txt","r");
    if(fp==NULL)
        printf("NO");
    else
    {
        printf("Successful\n");
        fgets(x,strlen(x),fp);
        puts(x);
    }
    fclose(fp);*/
    int sum=0,i;
    if(argc>1)
    {
      for(i=1;i<argc;i++)
     {
         sum+=atoi(argv[i]);
     }
     printf("%d",sum);
    }
}
