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
	char *student[]={"ѧ��001����A",
	                 "ѧ��002����B",
	                 "ѧ��003����C",
					 "ѧ��004����D",
					 "ѧ��005����E",};
	char *corse[]={"��ѧƽ��",
 	               "����ƽ��",
	               "Ӣ��ƽ��"};                 
	printf("ѧ��001����A\nѧ��002����B\nѧ��003����C\nѧ��004����D\nѧ��005����E\n");
	printf("����ABCDE���ͬѧ����ѧ�ɼ���\n");
	for(i=0;i<5;i++)
	scanf("%d",&math[i]);
	printf("����ABCDE���ͬѧ�����ĳɼ���\n");
	for(i=0;i<5;i++)
	scanf("%d",&chinese[i]);
	printf("����ABCDE���ͬѧ��Ӣ��ɼ���\n");
	for(i=0;i<5;i++)
	scanf("%d",&english[i]);
	printf("��ѧ�����ģ�Ӣ���ƽ���ɼ��ֱ��ǣ�\n");
	ave[0]=average(&math[0]);
	ave[1]=average(&chinese[0]);
	ave[2]=average(&english[0]);
	f=fopen("stud.txt","w");
	for(i=0;i<5;i++)
	fprintf(f,"%-8s  ��ѧ%d  ����%d  Ӣ��%d\n",student[i],math[i],chinese[i],english[i]);
	for(i=0;i<3;i++)
	fprintf(f,"%-4s  %0.2f\n",corse[i],ave[i]); 
	fclose(f);
	 
}
