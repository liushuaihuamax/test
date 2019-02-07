#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,s,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        s=0;
        while(n>0)
        {
            s= n%10;
            n=n/10;
            sum+=s*s;
        }
        if(sum==1)
        {
            printf("NO\n");ek
        }
        else
        {
            for(i=2; i<=sum; i++)
            {
                if(sum%i==0)
                {
                    break;
                }
            }
            if(i>sum-1)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}

