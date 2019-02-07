#include<stdio.h>
int main()
{
    int n,i,y,m,d;
    while(scanf("%d",&n)!=EOF)
    {
   while(n--)
    {
        int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int sum=0;
        scanf("%d %d %d",&y,&m,&d);
        if(y%400==0||(y%4==0&&y%100!=0))
            a[2]=29;
        for(i=0;i<m;i++)
        {
            sum+=a[i];
        }
        sum+=d;
        printf("%d\n",sum);
    }
    }
    return 0;
}
