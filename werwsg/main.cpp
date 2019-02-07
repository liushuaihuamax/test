#include<stdio.h>
struct st
{
    int m;
    int p;
} k[100];
int main()
{
    int i,n,j,t;
    while(~scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&k[i].m,&k[i].p);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(k[j].m>k[j+1].m)
                {
                    t=k[j].m,k[j].m=k[j+1].m,k[j+1].m=t;
                    t=k[j].p,k[j].p=k[j+1].p,k[j+1].p=t;
                }
                if(k[j].m==k[j+1].m)
                {
                    if(k[j].p<k[j+1].p)
                    {
                        t=k[j].p,k[j].p=k[j+1].p,k[j+1].p=t;
                    }
                }
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d %d\n",k[i].m,k[i].p);
        }
    }
    return 0;
}
