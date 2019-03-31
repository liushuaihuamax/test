#include<stdio.h>
int a[100010];
int f(int a[],int left,int right,int k)
{
    int i,j, key;
    key = a[left];
    i = left;
    j = right;
    while(i<j)
    {
        while(i<j&&a[j]<=key)
            j--;
        a[i] = a[j];
        while(i<j&&a[i]>=key)
            i++;
        a[j] = a[i];
    }
    a[i] = key;
    if(i==k)
        return a[k];
    else if(i>k)
        return f(a,left,i-1,k);
    else return f(a,i+1,right,k);
}
int main()
{
    int i, n, m,t,k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i = 1; i<=n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&k);
            m = f(a,1,n,k);
            printf("%d\n",m);
        }
    }
    return 0;
}
