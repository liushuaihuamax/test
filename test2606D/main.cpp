#include<stdio.h>
int main()
{
   long int n;
   int i,a[10],s,j;
   scanf("%ld",&n);
   for(i=0;i<10;i++)
   {
       s=n%10;
       a[i]=s;
       n=n/10;
       if(n==0)
        break;
   }
       for(j=i;j>=0;j--)
    {
        if(j==0)
            printf("%d\n",a[j]);
        else
            printf("%d ",a[j]);
    }
   return 0;
}
