#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,j,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        for(i=0; i<a; i++)
        {
            c=b/2;
            if(i!=a*2/3)
            {
                for(i=0; i<c; i++)
                {
                    printf(" ");
                }
                printf("#");
            }
            else
                for(j=0; j<b; j++)
                {
                    printf("#");
                }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
