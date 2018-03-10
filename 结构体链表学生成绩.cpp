#include"stdio.h"
#include"stdlib.h"
#define N 30//定义常量N等于30
struct data//创建“data”数据结构
{
	char num[N];//定义学号数组	
	char name[N];//定义名字数组
	float grade[3];//定义成绩数组，数据最长值为3
	float sum, ave;//浮点数 总成绩  平均分
	struct data *nextaddr;//定义结构指针 数据xxx指向下一个地址
};
int main()
{
	int a;//定义变量i（无关数据，循环控制量）
	struct data student[5];//结构数据student，三个数据（三人）
	struct data *first;//结构指针 第一个
	printf("请分别输入5个学生的学号，姓名，3个成绩:\n");
	for (a = 0; a < 5; a++)//for循环控制三次，输入三次
	{
		scanf("%s %s %f %f %f", &student[a].num, &student[a].name, &student[a].grade[0], &student[a].grade[1], &student[a].grade[2]);//输入所需数据
		getchar();//幻影换行符
		student[a].sum = student[a].grade[0] + student[a].grade[1] + student[a].grade[2];//数组运算
		student[a].ave = student[a].sum / 3.0;//平均值
	}//循环输入
	first = &student[0];//取第一个数组地址
	student[0].nextaddr = &student[1];//指向下一个
	student[1].nextaddr = &student[2];
	student[2].nextaddr = &student[3];
	student[3].nextaddr = &student[4];
	student[4].nextaddr = NULL;
	while (first)
	{
		printf("%s %-20s %0.1f %0.1f %0.1f %0.1f\n", first->num, first->name, first->grade[0], first->grade[1], first->grade[2], first->ave);//箭头指 输出数据
		first = first->nextaddr;//指针值替换？？还是如何解释？？
	}
	return 0;
}
