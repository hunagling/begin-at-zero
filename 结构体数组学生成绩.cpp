#include"stdio.h"
struct data//创建“data”数据结构
{
	char num[10];//定义学号数组	
	char name[15];//定义名字数组
	float grade[3];//定义成绩数组，数据最长值为3
	float sum, ave;//浮点数 总成绩  平均分

};
int main()
{
	int a;
	struct data student[5];
	printf("分别输入五个学生的学号,姓名,3个成绩:\n");
	for (a = 0; a < 5; a++)
	{
		scanf("%s %s %f %f %f", &student[a].num, &student[a].name, &student[a].grade[0], &student[a].grade[1], &student[a].grade[2]);//输入所需数据
		getchar();
		student[a].sum = student[a].grade[0] + student[a].grade[1] + student[a].grade[2];
		student[a].ave = student[a].sum / 3.0;
	}
    for (a = 0; a < 5; a++)
    printf("%s %-5s  %2.2f %1.2f %1.2f %1.2f\n",student[a].num,student[a].name,student[a].grade[0],student[a].grade[1],student[a].grade[2],student[a].ave );
	return 0;
}