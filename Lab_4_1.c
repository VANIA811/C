#include <stdio.h>
#include <math.h>

int main()

{
  int y,z,a,x;
  
do
{
        printf("a = ");
        scanf("%d",&a);
        printf("y = ");
        scanf("%d",&y);
        printf("z = ");
        scanf("%d",&z);
        x = a*sqrt(pow(y,2)-2*a)+pow(cos(z),2);
        if(x<0)
        {
        printf("Помилка. Вийшло від'ємне число.\n");
        printf("попробуйте ище раз.\n");
        }
        else
        {
            printf("x=%d",x);
        }
}       while(x<0);
}
