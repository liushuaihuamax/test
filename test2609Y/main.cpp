#include<stdio.h>
int main()
{
    int n,a[11],i,max,ma,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        max=a[0];
        for(i=0;i<n;i++)
        {
        if(a[i]>max)
        {
            max=a[i];
            ma=i;
        }
       else if(max==a[i])
       {
           count++;
       }
        }
        if(count>2)
        {
            ma=0;
        }
    printf("%d %d\n",max,ma);
    return 0;
}
