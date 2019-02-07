
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    int flag;
    char a[101];
    gets(a);
    flag=0;
    if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||(a[0]=='_'))
    {
        for(i=0; a[i]!='\0'; i++)
        {
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]=='_')||(a[i]>='0'&&a[i]<='9'))
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");

    }

}
