#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,j,c=0,n=0;
    for(i=2;i<=1000;i++)
    {c=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {c=1;break;}
        }
        if(c==0)
        {printf("%d\t",i);
        n++;}
        if(n==4)
            {n=0;printf("\n");}
    }
}
