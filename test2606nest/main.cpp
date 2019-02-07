#include<stdio.h>
int main()
{
    int n;
   while(scanf("%d",&n)!=EOF)
   {
    int i,a[10000]={0},count[10000]={0},max,zhong;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    max=count[a[0]];
    zhong=a[0];
    for(i=0;i<n;i++)
    {
        if(count[a[i]]>max);
        {
            max=count[a[i]];
            zhong=a[i];
        }
    }
    printf("%d\n",zhong);
   }
   return 0;
}
