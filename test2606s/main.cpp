#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
