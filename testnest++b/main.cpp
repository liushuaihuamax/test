#include <stdio.h>
#include <string.h>
int main()
{
    char str[100010],*p,*q;
    int n;
    while(gets(str)&&strcmp(str,"2013")!=0)
    {
        n=strlen(str);
        p=str;
        q=p+n-1;
        while(p<q)
        {
            if(*p==' ')
                p++;
            else if(*q==' ')
                q--;
            else if(*p==*q)
            {
                p++;
                q--;
            }
            else
                break;
        }
        if(p<q)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
