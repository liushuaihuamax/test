#include<stdio.h>
#include<stdlib.h>
struct renwu
{
    char name[21];
    int h;
}ren[21];
int main()
{
    struct renwu ren1[21];
    int i,j,n,h1,h2,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s %d",ren[i].name,&ren[i].h);
    }
       scanf("%d %d",&h1,&h2);
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               if(ren[i].h>ren[j].h)
               {
                   ren1[0]=ren[i];
                   ren[i]=ren[j];
                   ren[j]=ren1[0];
               }
           }
       }
  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s %d",ren[i].name,&ren[i].h);
    }
       scanf("%d %d",&h1,&h2);
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               if(ren[i].h>ren[j].h)
               {
                   ren1[0]=ren[i];
                   ren[i]=ren[j];
                   ren[j]=ren1[0];
               }
           }
       }

       if(b==0)
       {
           printf("No\n");
       }
       return 0;
}
