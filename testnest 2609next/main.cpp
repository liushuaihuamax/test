#include<stdio.h>
#include<string.h>
jdsuheiuadfiuewua
int main()
{
    char str[81];
    int i,len;
    while(gets(str)!=NULL)
    {
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
            else if(str[i]>='a'&&str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
        puts(str);
    }
    return 0;
}
ddsafdsfdsfsdfdsf
