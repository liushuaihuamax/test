#include<stdio.h>
int main()
{
    int n,a[5],i,count=0;
    scanf("%d",&n);
    while(n>0)
    {
       a[count++]=n%10;
       n=n/10;
    }
    printf("%d\n",count);
    for(i=count-1;i>=0;i--)
    {
     if(i==0)
     {
         printf("%d\n",a[i]);
     }
     else
        printf("%d ",a[i]);
    }
    for(i=0;i<count;i++)
    {
        if(i==count-1)
        {
            printf("%d\n",a[i]);
        }
        else printf("%d ",a[i]);
    }
    return 0;
}
