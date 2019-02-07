#include<stdio.h>
int main()
{
    int n,i;
    double sum=0.0,pi;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=1/(double)(4*i-3)-1/(double)(4*i-1);
    }
    pi=4*sum;
    printf("%.5lf\n",pi);
    return 1;
}
