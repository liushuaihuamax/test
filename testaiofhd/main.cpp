#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,j,l,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        for(i=0; i<a; i++)
        {
            c=b/2;
            if(i!=(a*2/3)-1)
            {
                for(j=0; j<c; j++)
                {
                    printf(" ");
                }
                printf("#");
            }
            else
            {
                for(l=0; l<b; l++)
                {
                    printf("#");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
