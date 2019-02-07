#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    int n,m;
    int i;
    int te;
    int sum;
    scanf("%d",&t);
    while(t--)
    {
         sum=0;
        scanf("%d %d",&n,&m);
         if(n > m)
        {
         te = n;
         n = m;
         m = te;
        }
        for(i = n; i <= m; i++)
            {
        te = sqrt(i);
        if(te * te == i)
            sum += i;
            }
        printf("%d\n",sum);
    }
        return 0;
}
