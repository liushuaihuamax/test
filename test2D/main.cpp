
#include<stdio.h>
struct
{
    int m;
    int p;
} k[100],t;
int main()
{
    int i,n,j;
    while(~scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&k[i].m);
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&k[i].p);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(k[j].m>k[j+1].m)
                {
                    t=k[j];
                    k[j]=k[j+1];
                    k[j+1]=t;
                }
                else if(k[j].m==k[j+1].m)
                {
                    if(k[j].p<k[j+1].p)
                    {
                        t=k[j];
                        k[j]=k[j+1];
                        k[j+1]=t;
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
