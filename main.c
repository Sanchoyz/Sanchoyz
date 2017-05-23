#include <stdio.h>
/*Вношу измениния*/
int main()
{
float x,eps,k,f=0,a, r=1;
printf ("Vvedite x: ");
scanf ("%f",&x);
printf ("Vvedite eps: ");
scanf ("%f",&eps);
k=0;
a = x;
f = a;
while (!((a<eps)&&(-eps<a)))
{
k=k+1;
r = -2*x/(2*k+1);
a=a*r;
f+=a;
printf ("\n%f", a);
}
printf ("\n%f", f);
return 0;
}
