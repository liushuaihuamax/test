#include<stdio.h>
int main()
{
    int a;
    int *p;
    p=&a;
    scanf("%d",p);
    printf("%d\n",*p);
    return 0;
}
