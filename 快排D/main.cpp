#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int s,y;
    while(scanf("%d %d",&s,&y)!=EOF)
    {
        int sum=pow(2,s)*(y+1);
        printf("%d\n",sum);
    }
    return 0;
}
