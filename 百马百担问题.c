#include<stdio.h>
int main()
{
int a, b, c;
int d=100,e=100;
for(a=0;a<34;a++)
for(b=0;b<51;b++)
for(c=0;c<=100;c++)
if(d==a+b+c&&e==3*a+2*b+0.5*c)
printf("%d         %d         %d\n",a,b,c);
return 0;
}
