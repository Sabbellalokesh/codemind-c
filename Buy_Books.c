#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int bc[a],i,ba[a];
    for (i=0; i<a ;i++)
    {
        scanf("%d",&ba[i]);
    }
    for (i=0; i<a; i++)
    {
        scanf("%d",&bc[i]);
    }
    int bs=0,ps=0;
    for (i=0; i<a; i++)
    {
        bs+=bc[i];
        ps+=ba[i];
    }
    int res=bs-ps;
    if (res<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",res);
    }
    return 0;
}