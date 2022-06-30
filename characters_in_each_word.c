#include<stdio.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            printf("%d ",c);
            c=0;
        }else{
            c++;
        }
    }
    printf("%d",c);
}