#include<stdio.h>
#include<math.h>
int can(int n,int m)
{
    int y;
    if(m==0)
    {
        y=1;
    }
    else
    {
        if(n==1)
        {
            y=1;
        }
        else
        {
            if(m==n)
            {
                y=1;
            }
            else
            {
                y=can(n-1,m-1)+can(n-1,m);
            }
        }
    }
    return y;
}
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",can(n,m));
    }
    return 0;
}
