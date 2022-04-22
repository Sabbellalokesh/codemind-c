#include<stdio.h>
int main()
{
    int n,arr[2000],i;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
    return 0;
}
