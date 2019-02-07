# include <stdio.h>
int f(int n)
{
    int i;
    int flag=0;
    if(n!=2)
    {
        for(i=2;i<n;i++)
     {
        if(n%i==0)
           {
               flag=0;
               break;
           }
        if(n%i!=0)
            flag=1;
     }
    }
    if(n==2)
        flag=1;
    return flag;
}
int main ()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(f(i)==1)
            sum+=i;
    }
        printf("%d",sum);
        return 0;
}
