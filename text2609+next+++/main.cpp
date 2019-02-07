#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j;
    char a[110][110],b[110][110];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int t=0,f=0;
        char s[110][110];
        for(i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%s",b[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(strcmp(a[i],b[j])==0)
                {
                    f=1;
                    strcpy(s[t++],a[i]);
                }
            }
        }
        if(f==1)
        {
            char d[110][110];
            for(i=0;i<t-1;i++)
            {
                for(j=0;j<t-i-1;j++)
                {
                    if(strcmp(s[j],s[j+1])>0)
                    {
                        strcpy(d[j],s[j]);
                        strcpy(s[j],s[j+1]);
                        strcpy(s[j+1],d[j]);
                    }
                }

            }
            for(i=0;i<n;i++)
                {
                    printf("%s\n",s[i]);
                }
        }
        else {printf("sad!\n");}
    }
    return 0;
}
