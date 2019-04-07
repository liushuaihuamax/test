#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int s,e;
    int num;
}a[101],t;
int main()
{
    int n,i,j,min;
   while(scanf("%d",&n)!=EOF)
   {

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i].s,&a[i].e);
        a[i].num=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].e>a[j].e)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    int count=0;
    min=a[0].e;
    count++;
    for(i=1;i<n;i++)
    {
        if(a[i].s>=min)
        {
            min=a[i].e;
            count++;
        }
    }
    printf("%d\n",count);
   }
    return 0;
}
