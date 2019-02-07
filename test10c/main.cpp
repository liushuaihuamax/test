#include<stdio.h>
#include<stdlib.h>
struct
{
    int a[7];
    char b[31];
}s;
int main()
{
    int i,max,min,sum;
    double ave;
    while(scanf("%d",&s.a[0])!=EOF)
    {
        sum=0;
        for(i=1;i<=6;i++)
        {
            scanf("%d",&s.a[i]);
        }
        scanf("%s",s.b);
        max=s.a[0];
        min=s.a[0];
        for(i=0;i<=6;i++)
        {
            if(max<s.a[i])
            {
                max=s.a[i];
            }
            else if(min>s.a[i])
            {
                min=s.a[i];
            }
            sum+=s.a[i];
        }
        sum=sum-max-min;
        ave=sum/5.0;
        printf("%s %.2lf\n",s.b,ave);
    }
    return 0;
}
