#include<stdio.h>
#include<math.h>
double add(int n,int m)
{
    int i;
    double s,sum;
    s=n;
    sum=n;
    for(i=1;i<m;i++)
    {
        s=sqrt(s);
        sum=sum+s;
    }
    return sum;
}
int main()
{
    int m,n;
     while(scanf("%d %d",&n,&m)!=EOF)
    {
        printf("%.2lf\n",add(n,m));
    }
    return 0;
}
