#include<stdio.h>
int main()
{
    int l,r,sum=0,z=0;
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++)
    {
        z=0;
        for(int j=i;j<=r;j++)
        {
            z+=j;
            if(z%2)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
}