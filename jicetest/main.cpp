#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        m=sqrt(i);
        int j;
        for(j=2;j<=m;j++)
        {
            if(i%j==0)break;
        }
        if(j>m)
        {
            printf("%d ",i);
            count++;
            if(count%10==0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
