#include<stdio.h>
int main()
{
    int n,k,a[100],c=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {  int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
