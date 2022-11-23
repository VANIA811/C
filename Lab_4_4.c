#include <stdio.h>
#include <math.h>

int main()
{
float y=0,x=-1,b = 25,dx = 1.25;
printf("X\t\t\t\tY\n");
while (x<=b)
{
y=exp(x)/3*x-12;
printf(" %f\t\t%f\n", x, y);
x+=dx;
}
return 0;
}
