
#include<stdio.h>
#include<string.h>
int a[1005];
int c[1005];
int main()
{
    int n,m,i,j;
    while(~scanf("%d",&n))
    {
        int max=0;
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        memset(c,0,sizeof(int));
        for(i=1; i<=n; i++)
        {
            m=0;
            for(j=1; j<i; j++)
            {
                if(a[i]>a[j])
                {
                    if(m<c[j])
                        m=c[j];
                }
            }
            c[i]=m+a[i];
            if(c[i]>max)
                max=c[i];
        }
        printf("%d\n",max);
    }
    return 0;
}
