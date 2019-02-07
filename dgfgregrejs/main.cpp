#include <stdio.h>
struct stu
{
    int kg, jia;
} wu[101];
int main()
{
    int n,  t,i, j;
    while(~scanf("%d", &n))
    {
        for (i = 0 ; i < n ; i++)
        {
            scanf("%d", &wu[i].kg);
        }
        for (i = 0 ; i < n ; i++)
        {
            scanf("%d", &wu[i].jia);
        }
        for (i = 0 ; i < n - 1 ; i++)
        {
            for (j = 0 ; j < n - 1 - i ; j++)
            {
                if (wu[j].kg > wu[j+1].kg)
                {
                    t = wu[j].jia, wu[j].jia  = wu[j+1].jia, wu[j+1].jia  = t;
                    t = wu[j].kg, wu[j].kg = wu[j+1].kg, wu[j+1].kg = t;
                }
                if (wu[j].kg==wu[j+1].kg)
                {
                    if (wu[j].jia<wu[j+1].jia)
                    {
                        t = wu[j].jia, wu[j].jia  = wu[j+1].jia, wu[j+1].jia  = t;
                    }
                }
            }
        }
        for (i = 0 ; i < n ; i++)
        {
            printf("%d %d\n", wu[i].kg, wu[i].jia);
        }
    }
    return 0;
}
