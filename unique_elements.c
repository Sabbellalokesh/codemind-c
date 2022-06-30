#include<stdio.h>
int main()
{
    int n,c=0,arr[100],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
    
            
                if(arr[i]==arr[j])
                {
                    for(k=j;k<n;k++)
                    {
                        arr[k]=arr[k+1];
                    }
                    j--;
                     n--;
                    
                }
            
        }
        
    }
    for(int i=0;i<n;i++)
    {
         printf("%d ",arr[i]);
    }
}