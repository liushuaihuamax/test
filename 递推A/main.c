#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int a[100];
    int n,i;
    a[1]=1;
    a[2]=2;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=3; i<=n; i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%lld\n",a[n]);
    }
    return 0;
}
