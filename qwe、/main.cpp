#include <stdio.h>
#include <string.h>
int juge(char *s)
{
    int len = strlen(s);
    char *p = s,*q = s + len - 1;
     while(p < q)
  {
    if(*p == ' ')
    {
     p++;
     continue;
    }
    if(*q == ' ')
    {
        q--;
     continue;
    }
   if(*p == *q)
    {
         p++;
         q--;
    }
          else
        return 0;
  }
         return 1;
}
int main()
{
  char st[100200];
  while(gets(st))
    {
    if(strcmp(st,"2013") == 0)
            break;
    if(juge(st))
    printf("YES\n");
    else
    printf("NO\n");
    }
}
