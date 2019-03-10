#include<stdio.h>
int main()
{
    struct manyi
    {
        int price;
        int com;
    } a[5001];
    int i,max,t,n;
    while(scanf("%d",&n)!=EOF)
    {
        max=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&a[i].price,&a[i].com);
            if(a[i].price>max)
            {
                max=a[i].price;
                t=i;
            }
            if(a[i].price==max)
            {
                if(a[i].com>a[t].com)
                    t=i;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
