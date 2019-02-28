#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int a,b;//½á¹¹Ìå¡£
} st[5000];
int main()
{
    int i,n,max,temp;
    while(scanf("%d",&n)!=EOF)
    {
        max=0;
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&st[i].a,&st[i].b);
            if(st[i].a==max)
            {
                if(st[i].b>st[temp].b)temp=i;
            }
            else
            {
                if(st[i].a>max)
                {
                   max=st[i].a,temp=i;
                }
            }
        }
        printf("%d\n",temp+1);
    }
    return 0;
}
