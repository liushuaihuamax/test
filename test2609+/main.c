#include<stdio.h>
#include<string.h>
int main()
{
    int c[11],j,t;
    char s[21][101],m[101];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0;i<10;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(strcmp(s[i],s[j])<0)
            {
                strcpy(m,s[j]);
                strcpy(s[j],s[i]);
                strcpy(s[i],m);
                t=c[j];c[j]=c[i];c[i]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%s,%d\n",s[i],c[i]);
    }
    return 0;
}
