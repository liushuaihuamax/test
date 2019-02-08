
#include <stdio.h>

int main( void )

{

     int n, i = 0, m, p,ans;

     scanf("%d%d", &n, &m);

     while( ++i <= n )

     {

         p = i * m;

         while (p > n)

             p = p - n + (p - n - 1)/(m - 1);



         ans=p;

     }

     printf("%d\n",ans);

     return 0;

}

