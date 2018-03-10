#include <stdio.h>
#include <string.h>
#define MAX 1000
char*  reverse(char x[0])
{
    int  tem,len=strlen(x);
    int n=len/2;
    for(int i=0; i<=n; i++)         
		{
            tem=x[i];
            x[i]=x[len-1-i];
            x[len-1-i]=tem;
        }    
    return x;
}

int main()
{
	char message[MAX];
    printf("ÊäÈë×Ö·û´®£»");
    gets(message);
	puts(reverse(message));
}