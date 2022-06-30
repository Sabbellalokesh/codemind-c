#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c=0,*arr,n,i;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            c++;
        }
    }
    if(c<=2)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
