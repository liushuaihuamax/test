#include<stdio.h>
int main()
{
    int a,b,r,t,m,n;
    scanf("%d %d",&a,&b);
    m=a;
    n=b;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    while(b>0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("%d\n%d\n",a,(m*n)/a);
    return 0;
}
