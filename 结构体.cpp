#include <stdio.h>
struct student
{
	char SN[5];
	char name[12];
	int score1;
	int score2;
	int score3;
};
int main()
{
	int i;
	float average[3],total[3]; 
	struct student students[5];
	printf("�ֱ�����ѧ��ѧ�ţ������������ɼ���\n"); 
	for(i=0;i<5;i++)
	{
		scanf("%s%s%d%d%d",&students[i].SN,&students[i].name,&students[i].score1,&students[i].score2,&students[i].score3);
	}
	printf("ѧ�������Ƶ�ƽ���ɼ�:\n");
	for(i=0;i<5;i++)
	total[0]+=students[i].score1;
	for(i=0;i<5;i++)
	total[1]+=students[i].score2;
	for(i=0;i<5;i++)
	total[2]+=students[i].score3;
	for(i=0;i<3;i++)
	average[i]=total[i]/5.0;
	for(i=0;i<3;i++)
	printf("%0.2f  \n",average[i]);
	for(i=0;i<5;i++)
	printf("%-5s %-12s %d %d %d\n",students[i].SN,students[i].name,students[i].score1,students[i].score2,students[i].score3);
}
