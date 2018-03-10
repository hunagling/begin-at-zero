#include<stdio.h>
int main()
{
	int a[12],b[12],i;
	a[0]=0;
	a[1]=1;
	printf("第%d次共%d只\n",1,2);
	for(i=2;i<=12;i++)
	{
		a[i]=a[i-1]+a[i-2];
		b[i]=2*a[i];
        printf("第%d次共%d只\n",i,b[i]);
	}	 
} 

