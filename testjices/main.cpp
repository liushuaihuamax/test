#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int temp,l,r;
    while(scanf("%d %d",&l,&r)!=EOF)
    {
        int sum=0;
        for(int i=l; i<=r; i++)
        {
            int flag=0;
            if(i==1)
            {
                flag=1;
            }
            for(int j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    flag=1;
                }
            }
            if(flag!=1)
            {
                temp=i;
                while(temp>0)
                {
                    sum+=temp%10;
                    temp/=10;
                }
            }
        }

        printf("%d\n",sum);
    }
    return 0;
}
