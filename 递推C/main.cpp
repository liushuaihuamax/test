#include<stdio.h>
int main()
{
    int n,i;
    long long int a[51];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=3;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%lld\n",a[n]);
    }
    return 0;
}
