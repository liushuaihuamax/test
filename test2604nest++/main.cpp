#include<stdio.h>
int main()
{
    int a,i,a1,a2,a3,a4,a5,a6,sum,temp,flag,j;
    while(scanf("%d",&a)!=EOF)
    {
        flag=1;
        temp=1;
        a1=a%10;
        a2=a/10%10;
        a3=a/100%10;
        a4=a/1000%10;
        a5=a/10000%10;
        a6=a/100000%10;
        sum=a1+a2+a3+a4+a5+a6;
        for(i=2;i<=a-1;i++)
        {
            if(a%i==0)
                temp++;
        }
        if(flag==1)
        {
            for(j=2;j<=sum-1;j++)
            {
                if(sum%j==0)
                    temp++;
            }
        }
        if(flag==1&&temp==1)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
