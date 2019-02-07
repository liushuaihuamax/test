#include<stdio.h>
int main()
{
int b, i,n, c;
double a[100],y;
while (scanf("%d",&n) != EOF)
{
    y=0;
for (i = 0; i<n; i++)
{
	scanf("%lf", &a[i]);
}
	for (i = 0; i<n; i++)
 {
	for (b = 0; b<n; b++)
    {
   if (a[i]<a[b])
       {
	 c = a[i]; a[i] = a[b]; a[b] = c;
       }
    }
 }
if (n % 2 != 0)
     {
	 n = n / 2 + 1; y =a[n-1];
	 }
else {
     n = n / 2; y = (a[n-1] + a[n])/2;
     }
printf("%.1lf\n", y);
}
return 0;
}
