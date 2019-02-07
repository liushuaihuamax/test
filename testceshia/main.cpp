#include<stdio.h>
#include<string.h>
#include<stdlib.h>
union white
{
    int a;
    double b;
    char c[30];
}bian[100001];
char str[100001][30];
int main()
{
    int m,n,i,j,k;
    double f;
    char stri[30];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        if(strcmp("INT",str[i])==0)
        {
            scanf("%d",&j);
            bian[i].a=j;
        }
        else if(strcmp("DOUBLE",str[i])==0)
        {
            scanf("%lf",&f);
            bian[i].b=f;
        }
        else if(strcmp("STRING",str[i])==0)
        {
            scanf("%s",stri);
            strcpy(bian[i].c,stri);
        }
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&k);
        if(strcmp("INT",str[k])==0)
        {
            printf("%d\n",bian[k].a);
        }
        else if(strcmp("DOUBLE",str[k])==0)
        {
            printf("%.2lf\n",bian[k].b);
        }
        else if(strcmp("STRING",str[k])==0)
        {
            printf("%s\n",bian[k].c);
        }
    }
    return 0;
}
