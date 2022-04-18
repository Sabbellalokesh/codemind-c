#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,sq;
    scanf("%d",&n);
    sq=sqrt(n);
    l=sq*sq;
    if(l==n)
    printf("True");
    else
    printf("False");
}