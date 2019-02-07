#include<stdio.h>
int f(int i,int r)
{
    int flag=0;
    int sum=0,j,k,s;
    if(i==1||r==1)
    {
        flag=1;
    }
    else
    {
        for(j=i;j<=r;j++)
        {
            for(k=2;k<j;k++)
            {
                if(j%k==0)
                {
                    flag=1;
                }
                if(flag==0)
                {
                    while(j>0)
                    {
                        s=j%10;
                        sum+=s;
                        j/=10;
                    }
                }
            }
        }
    }
    return sum;
}
int main()
{
    int i,r;
    while(scanf("%d %d",&i,&r)!=EOF)
    {
        f(i,r);
        printf("%d\n",f(i,r));
    }
    return 0;
}
