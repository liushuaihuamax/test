#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int i,n=0,w=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ') w=0;
        else if(w==0)
        {
            w=1;
            n++;
        }
    }
    printf("%d\n",n);
    return 0;
}
