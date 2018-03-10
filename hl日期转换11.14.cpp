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
printf("%d年的第%d天是", x, n);
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
printf("%d月%d日.\n", m, d);
}
int run2(int x, int d[3])
{
int i, n = d[2], a[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
if (yd == 366) a[2] = 29;
for (i = 0; i <= d[1] - 1; i++)
n = n + a[i];
printf("该日是%d年的第%d天。\n", d[0], n);
return(n);
}
int  main()
{

int num, md, data[3];
printf("输入1日期转换为天数，2天数转换为日期：");
scanf("%d", &num);
if (num == 1) {

printf("请输入年份：\n");
scanf("%d", &data[0]);
while (data[0] <= 0)
{
printf("输入的年份应大于0，请重新输入:\n");
scanf("%d", &data[0]);
}
aa(data[0]);
printf("请输入月份：\n");
scanf("%d", &data[1]);
while (data[1]<1 || data[1]>12)
{
printf("输入的月份应在1-12之间，请重新输入:\n");
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
printf("请输入日：\n");
scanf("%d", &data[2]);
while (data[2]>md || data[2]<1)
{
printf("输入值应小于等于该月的总天数或大于等于1，请重新输入:\n");
scanf("%d", &data[2]);
}
printf("您输入的是%d年%d月%d日，", data[0], data[1], data[2]);
run2(data[0], data);
}
else if (num = 2) {

int day, year;
printf("输入年份：\n");
scanf("%d", &year);
while (year <= 0) {
printf("重新输入：\n");
scanf("%d", &year);
}
aa(year);
printf("请输入天数: ");
scanf("%d", &day);
run(year, day);
}
return 0;

}