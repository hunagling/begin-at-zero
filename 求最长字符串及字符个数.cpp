#include<stdio.h>
#include<string.h>
int main()
{
	int i,num,len,max,nummax;
	char endstr[4]="end";
	char str[30][100];
	printf("enter some strings£º");
	for(i=0;i<30;i++)
	{
		gets(str[i]);
		if(!strcmp(str[i],endstr))
		{
			break;
		}
	}
	num=i;
	max=1;
	for(i=0;i<num;i++)
	{
		len=strlen(str[i]);
		if(len>=max)
		{
			max=len;
			nummax=i;	
		}
	}
	printf("The large string:");
	puts(str[nummax]);
	printf("The string has %d characters",max);
	return 0;	 
} 