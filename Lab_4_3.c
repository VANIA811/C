#include <stdio.h>
#include <math.h>

int main()
{
int n,s1=0,s2=0,i=1,j=2,g,x;
printf("x = ");
scanf("%d",&x);
printf("n = ");
scanf("%d",&n);
while(i<=n)
{
   s1+=pow(i,2);
   i++;
}
while(j<=n)
{
  s2+=pow(j,2);
  j++;
}
g=s1*s2*(x+j+i/4);
printf("%d",g);
}
