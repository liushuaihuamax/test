#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],s;
    int i,j,n;
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>='A'&&str[i]<'Z')
        {
            str[i]+=32;
        }
        else
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str[i]-=32;
            }
            if(str[i]>=48&&str[i]<=57)
            {
                str[i]=105-str[i];
            }
        }
    }
        i=0;
        j=n-1;
        while(i<j)
        {
            s=str[i];
            str[i]=str[j];
            str[j]=s;
            i++;
            j--;
        }
        puts(str);
        return 0;
}
