#include<stdio.h>
int main()
{
    int i,c=0,t=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            c=0;
        }else{
            c++;
        }
        if(c>t)
        {
            t=c;
        }
    }
    printf("%d",t);
}