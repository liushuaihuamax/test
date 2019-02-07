#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k,t,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i!=0)
        {
            t=a[n-1];
            for(j=n-2;j>=0;j--)
            {
                a[j+1]=a[j];
            }
            a[0]=t;
        }
        printf("%d",a[0]);
        for(k=1;k<n;k++)
        {
            printf(" %d",a[k]);
        }
        printf("\n");
    }
    return 0;
}
