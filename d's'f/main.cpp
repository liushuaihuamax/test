#include<stdio.h>
int main()
{
    int n,a[20],i,j,k,t;
    scanf("")
}
for(i=0;i<n;i++)
{
    if(i!=0)
    {
        t=a[n-1];
        for(j=n-1;j>=0;j--)
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
    return 0;
}
