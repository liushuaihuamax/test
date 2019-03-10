#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
    int id,ac;
}s[1001],t;
int main()
{
    int T,n,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&s[i].id,&s[i].ac);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                if(s[j].ac<s[j+1].ac)
                {
                    t=s[j];
                    s[j]=s[j+1];
                    s[j+1]=t;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            printf("%d %d\n",s[i].id,s[i].ac);
        }
    }
    return 0;
}
