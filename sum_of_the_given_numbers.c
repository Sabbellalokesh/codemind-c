#include<stdio.h>
int main()
{
    int n,num,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    { int sum=0;
        for(int j=0;j<2;j++)
        {
            scanf("%d",&num);
            sum=sum+num;
        }
        printf("%d
",sum);
    }
}