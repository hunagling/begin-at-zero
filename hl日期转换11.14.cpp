#include<stdio.h>
int yd;
int aa(int x)
{
if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
yd = 366;
else yd = 355;
}
int run(int x, int n)
{
int i, m, d, s = 0, a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
printf("%d��ĵ�%d����", x, n);
if (yd == 366) a[2] = 29;
for (i = 0; i<12; i++)
{
s += a[i];
if (n>s&&n <= s + a[i + 1])
{
m = i + 1;
d = n - s;
}
}
printf("%d��%d��.\n", m, d);
}
int run2(int x, int d[3])
{
int i, n = d[2], a[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
if (yd == 366) a[2] = 29;
for (i = 0; i <= d[1] - 1; i++)
n = n + a[i];
printf("������%d��ĵ�%d�졣\n", d[0], n);
return(n);
}
int  main()
{

int num, md, data[3];
printf("����1����ת��Ϊ������2����ת��Ϊ���ڣ�");
scanf("%d", &num);
if (num == 1) {

printf("��������ݣ�\n");
scanf("%d", &data[0]);
while (data[0] <= 0)
{
printf("��������Ӧ����0������������:\n");
scanf("%d", &data[0]);
}
aa(data[0]);
printf("�������·ݣ�\n");
scanf("%d", &data[1]);
while (data[1]<1 || data[1]>12)
{
printf("������·�Ӧ��1-12֮�䣬����������:\n");
scanf("%d", &data[1]);
}
switch (data[1])
{
case 1:md = 31; break;
case 2:if (yd == 366) md = 29; else md = 28; break;
case 3:md = 31; break;
case 4:md = 30; break;
case 5:md = 31; break;
case 6:md = 30; break;
case 7:md = 31; break;
case 8:md = 31; break;
case 9:md = 30; break;
case 10:md = 31; break;
case 11:md = 30; break;
case 12:md = 31;
}
printf("�������գ�\n");
scanf("%d", &data[2]);
while (data[2]>md || data[2]<1)
{
printf("����ֵӦС�ڵ��ڸ��µ�����������ڵ���1������������:\n");
scanf("%d", &data[2]);
}
printf("���������%d��%d��%d�գ�", data[0], data[1], data[2]);
run2(data[0], data);
}
else if (num = 2) {

int day, year;
printf("������ݣ�\n");
scanf("%d", &year);
while (year <= 0) {
printf("�������룺\n");
scanf("%d", &year);
}
aa(year);
printf("����������: ");
scanf("%d", &day);
run(year, day);
}
return 0;

}