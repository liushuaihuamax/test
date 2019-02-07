#include<stdio.h>
int main()
{
    int x,y,m,n,i,j,high;
    int a[100][100];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        scanf("%d %d",&x,&y);
        high=a[0][0];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(high<a[i][j])
                    high=a[i][j];
            }
        }
        printf("%d\n",high-a[x-1][y-1]);
    }
    return 0;
}
