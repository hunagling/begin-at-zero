#include <stdio.h>
int average(int math[])
{
	int i=0,total=0;
	float average; 
	for(i;i<5;i++)
	total+=math[i];
	average=total/5.0;
	printf("%0.2f\n",average);
	return average;
} 
int main()
{
	int i,math[5],chinese[5],english[5];
	float ave[3];
	FILE *f;
	char *student[]={"学号001姓名A",
	                 "学号002姓名B",
	                 "学号003姓名C",
					 "学号004姓名D",
					 "学号005姓名E",};
	char *corse[]={"数学平均",
 	               "语文平均",
	               "英语平均"};                 
	printf("学号001姓名A\n学号002姓名B\n学号003姓名C\n学号004姓名D\n学号005姓名E\n");
	printf("输入ABCDE五个同学的数学成绩；\n");
	for(i=0;i<5;i++)
	scanf("%d",&math[i]);
	printf("输入ABCDE五个同学的语文成绩；\n");
	for(i=0;i<5;i++)
	scanf("%d",&chinese[i]);
	printf("输入ABCDE五个同学的英语成绩；\n");
	for(i=0;i<5;i++)
	scanf("%d",&english[i]);
	printf("数学，语文，英语的平均成绩分别是：\n");
	ave[0]=average(&math[0]);
	ave[1]=average(&chinese[0]);
	ave[2]=average(&english[0]);
	f=fopen("stud.txt","w");
	for(i=0;i<5;i++)
	fprintf(f,"%-8s  数学%d  语文%d  英语%d\n",student[i],math[i],chinese[i],english[i]);
	for(i=0;i<3;i++)
	fprintf(f,"%-4s  %0.2f\n",corse[i],ave[i]); 
	fclose(f);
	 
}
