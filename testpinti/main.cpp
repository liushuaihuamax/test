#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][80],t[80];
    int i,j;
    for(i=0;i<5;i++)
    {
      scanf("%s",&str[i]);
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(t,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],t);
            }
        }
    }
    printf("After sorted:\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
