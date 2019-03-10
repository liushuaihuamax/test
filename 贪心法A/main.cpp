#include<stdio.h>
#include<string.h>
int main()
{
    int a[300]={0},i,n,j,h,system;
    while(scanf("%d",&n)!=EOF)
    {
        system=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h);
            for(j=0;j<system;j++)
            {
                if(a[j]>=h)
                {
                    break;
                }
            }
            if(j<system)
            {
                a[j]=h;
            }
            else
            {
                a[system]=h;
                system++;
            }
        }
        printf("%d\n",system);
    }
    return 0;
}
