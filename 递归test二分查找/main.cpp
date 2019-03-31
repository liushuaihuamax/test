#include<stdio.h>
#include<stdlib.h>
int a[11];
void quan(int a[],int k,int m)
{
    int i,t;
    if(k==m)
    {
        for(i=1; i<m; i++)
            printf("%d,",a[i]);
            printf("%d\n",a[m]);
    }
    else
    {
        for(i=k; i<=m; i++)
        {
           t=a[k];a[k]=a[i];a[i]=t;
            quan(a,k+1,m);
           t=a[k];a[k]=a[i];a[i]=t;//变回原样
        }
    }
}
int main()
{
    int T,i,n;
    while(scanf("%d",&T)!=EOF)
    {
        while(T--)
        {
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                scanf("%d",&a[i]);
            }
            quan(a,1,n);
        }
    }
    return 0;
}
