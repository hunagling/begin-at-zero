#include"stdio.h"
#include"stdlib.h"
#define N 30//���峣��N����30
struct data//������data�����ݽṹ
{
	char num[N];//����ѧ������	
	char name[N];//������������
	float grade[3];//����ɼ����飬�����ֵΪ3
	float sum, ave;//������ �ܳɼ�  ƽ����
	struct data *nextaddr;//����ṹָ�� ����xxxָ����һ����ַ
};
int main()
{
	int a;//�������i���޹����ݣ�ѭ����������
	struct data student[5];//�ṹ����student���������ݣ����ˣ�
	struct data *first;//�ṹָ�� ��һ��
	printf("��ֱ�����5��ѧ����ѧ�ţ�������3���ɼ�:\n");
	for (a = 0; a < 5; a++)//forѭ���������Σ���������
	{
		scanf("%s %s %f %f %f", &student[a].num, &student[a].name, &student[a].grade[0], &student[a].grade[1], &student[a].grade[2]);//������������
		getchar();//��Ӱ���з�
		student[a].sum = student[a].grade[0] + student[a].grade[1] + student[a].grade[2];//��������
		student[a].ave = student[a].sum / 3.0;//ƽ��ֵ
	}//ѭ������
	first = &student[0];//ȡ��һ�������ַ
	student[0].nextaddr = &student[1];//ָ����һ��
	student[1].nextaddr = &student[2];
	student[2].nextaddr = &student[3];
	student[3].nextaddr = &student[4];
	student[4].nextaddr = NULL;
	while (first)
	{
		printf("%s %-20s %0.1f %0.1f %0.1f %0.1f\n", first->num, first->name, first->grade[0], first->grade[1], first->grade[2], first->ave);//��ͷָ �������
		first = first->nextaddr;//ָ��ֵ�滻����������ν��ͣ���
	}
	return 0;
}
