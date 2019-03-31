#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[64],o[64],i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&o[i]);
        }
        for(i=0; i<n; i++)
        {
            if(i==n-1)
            {
                if(a[i]==1&&o[i]==1)
                {
                    printf("1\n");
                }
                else
                    printf("0\n");
            }
            else
            {
                if(a[i]==1&&o[i]==1)
                {
                    printf("1 ");
                }
                else
                    printf("0 ");
            }
        }
        for(i=0; i<n; i++)
        {
            if(i==n-1)
            {
                if(a[i]==1||o[i]==1)
                {
                    printf("1\n");
                }
                else
                    printf("0\n");
            }
            else
            {
                if(a[i]==1||o[i]==1)
                {
                    printf("1 ");
                }
                else
                    printf("0 ");
            }
        }
    }
    return 0;
}
