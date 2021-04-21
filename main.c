#include <stdio.h>
#include <math.h>
int main(void) {
int a,b,c;
float y;
printf("\n a=");//-1
scanf("%d",&a);

printf("\n b=");//12
scanf("%d",&b);

printf("\n c=");//26
scanf("%d",&c);

y=(a+4*b-pow(c,2))/(2*a*b*c);

printf("\n y=(a+4*b-pow(c,2))/(2*a*b*c)");
printf("\n y=%f",y);

return 0;
}