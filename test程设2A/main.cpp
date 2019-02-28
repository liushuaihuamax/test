#include<stdio.h>
int main()
{
    struct manyi
    {
        int price;
        int com;
    }a[5001];
    int n,i,max,x,y;
    while(scanf("%d",&n)!=EOF)
    {
    x=-1,y=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i].price,&a[i].com);
        if(a[i].price>x||(a[i].price&&a[i].com>y))
        {
            max=i+1;
            x=a[i].price,y=a[i].com;
        }
    }
    printf("%d\n",max);
    }
    return 0;
}
