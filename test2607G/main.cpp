#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,count=0,a[10];
    scanf("%d",&n);
    while(n)
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
            {
        printf("%d ",a[i]);
            }
    }
    for(i=0;i<count;i++)
    {
        if(i==count-1)
            {
            printf("%d\n",a[i]);
            }
        else
            {
        printf("%d ",a[i]);
            }
    }
    return 0;
}
