#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,t;
   while(scanf("%d",&n)!=EOF)
   {
    for(i=1;i<=n;i++)
    {

        for(t=1;t<=i;t++)
        {
            if(t==1)
                printf("%d*%d=%d",t,i,t*i);
            else
                printf(" %d*%d=%d",t,i,t*i);
        }printf("\n");
    }
   } return 0;
}
