#include"stdio.h"
struct data//������data�����ݽṹ
{
	char num[10];//����ѧ������	
	char name[15];//������������
	float grade[3];//����ɼ����飬�����ֵΪ3
	float sum, ave;//������ �ܳɼ�  ƽ����

};
int main()
{
	int a;
	struct data student[5];
	printf("�ֱ��������ѧ����ѧ��,����,3���ɼ�:\n");
	for (a = 0; a < 5; a++)
	{
		scanf("%s %s %f %f %f", &student[a].num, &student[a].name, &student[a].grade[0], &student[a].grade[1], &student[a].grade[2]);//������������
		getchar();
		student[a].sum = student[a].grade[0] + student[a].grade[1] + student[a].grade[2];
		student[a].ave = student[a].sum / 3.0;
	}
    for (a = 0; a < 5; a++)
    printf("%s %-5s  %2.2f %1.2f %1.2f %1.2f\n",student[a].num,student[a].name,student[a].grade[0],student[a].grade[1],student[a].grade[2],student[a].ave );
	return 0;
}