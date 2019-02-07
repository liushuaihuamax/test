#include<stdio.h>
int main()
{
    int n,m[10],i,t;
    while(scanf("%d",&n)!=EOF)
    {
        t=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&m[i]);
        }
        for(i=1;i<n;i++)
        {
            if(m[0]>m[i])
            {
                t++;
            }
        }
        printf("%d\n",t++);
    }
    return 0;
}
