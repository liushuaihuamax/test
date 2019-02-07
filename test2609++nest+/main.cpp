#include<stdio.h>
#include<string.h>
int main()
{
    char str1[81],str2[81];
    int i,t=0,len;
    gets(str1);
    len=strlen(str1);
    for(i=0;i<len;i++)
    {
        if((str1[i]>='a'&&str1[i]<='z')||(str1[i]>='A'&&str1[i]<='Z'))
            str2[t++]=str1[i];
    }
    for(i=0;i<t;i++)
    {
        printf("%c",str2[i]);
    }
    printf("\n");
    return 0;
}
