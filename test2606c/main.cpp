#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num[10]={0};
   int n,i,a,b,c,sum,ave;
    while(~scanf("%d",&n))
   {
       sum=0;
       a=0;
       b=0;
       c=0;
       for(i=0;i<n;i++)
       {
           scanf("%d",&num[i]);
       }
       for(i=0;i<n;i++)
       {
           sum+=num[i];
       }
       ave=sum/n;
       for(i=0;i<n;i++)
       {
           if(num[i] < ave)
                a++;
           else if(num[i] == ave)
                b++;
          else  if(num[i] > ave)
                c++;
       }
        printf("%d ",a);
        printf("%d ",b);
        printf("%d\n",c);
   }
   return 0;
}
