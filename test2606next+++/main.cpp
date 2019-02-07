#include<stdio.h>
#include<math.h>
int f(int n)
{
    int f,i;
    int f1=2,f2=3,f3=5;
    for(i=4;i<=n;i++)
    {
       f=f3+f2-f1;
       f1=f2;
       f2=f3;
       f3=f;
    }
    return f;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}
