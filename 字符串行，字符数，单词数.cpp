#include <stdio.h>
#define MAX 1000
int count(char[]);
int word(char[]);
int line(char[]);
int main()
{
	char message[MAX];
	int numchar,numword,numline,i=0;
	printf("�����ַ�����");
	while((message[i++]=getchar())!='#')
	;
	numchar=count(message);
	printf("���ַ�����%d���ַ�\n",numchar);
	numword=word(message);
	printf("���ַ�����%d������\n",numword);
	numline=line(message);
	printf("���ַ�����%d��\n",numline);
	return 0; 
}
int count(char list[])
{
	int i,count=0;
	for(i=0;list[i]!='\0';i++)
	count++;
	return (count);
} 
int word(char list[])
#define YES 1
#define NO 0
{
	int i,inaword,word=0;
	inaword=NO;
	for(i=0;list[i]!='\0';i++)
	{
		if((list[i]==' ')||(list[i]=='\n'))
		inaword=NO;
		else if (inaword==NO)
		{
			inaword=YES;
			word++;
		}
	}
	return (word);
}
int line(char list[])
{
	int i,line=1;
	for(i=0;list[i]!='\0';i++)
	{
		if(list[i]=='\n')
		line++;
		
	}
	return (line);
} 
