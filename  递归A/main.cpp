#include<stdio.h>
#include<stdlib.h>
int F(int n,int m)
{
    int y;
    if(n==1||m==1)
    {
        y=1;
    }
    else
    {
        y=F(n-1,m)+F(n,m-1);
    }
    return y;
}
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        printf("%d\n",F(n,m));
    }
    return 0;
}
