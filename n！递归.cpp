#include<stdio.h> 
int f(int n)
{
     if(n==0||n==1)
         return 1;
      else
         return n*f(n-1);
}
int main()
{
	int n,result;
	printf("n:\n");
	scanf("%d",&n);
	result=f(n);
	printf("%dµÄ½×³Ë%d",n,result);
}