#include<stdio.h>
#include<stdlib.h>
int f(int a[],int l,int r,int k)
{
    int key=a[l],i=l,j=r;
    while(i<j)
    {
        while(i<j&&a[j]>=key)
            j--;
        a[i]=a[j];
        while(i<j&&a[i]<=key)
        {
            i++;
        }
        a[j]=a[i];
    }
    a[i]=key;
    if(i==k) return a[i];
    else if(i>k)
    {
        return f(a,l,i-1,k);
    }
    else
    {
        return f(a,i+1,r,k);
    }
}
int mian()
{
    int a[100001],i,n,m;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    }
    scanf("%d",&m);
    while(m--)
    {
        int x;
        scanf("%d",&x);
        f(a,0,n-1,x-1);
        printf("%d\n",f(a,0,n-1,x-1));
    }
    return 0;
}
