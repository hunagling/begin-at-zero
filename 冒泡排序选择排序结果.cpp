#include<stdio.h>
int Bubblesort(int a[])
{
	printf("������������\n"); 
	int t=0,moves=0;
    for(int j=9;j>0;j--)
     for(int i=0;i<j;i++)
        if(a[i]>a[i+1])
        {
          t=a[i];
          a[i]=a[i+1];
          a[i+1]=t;
          moves++;
       printf("ÿ��ѭ���Ľ��");
      for(int i=0;i<10;i++)
      { 
      printf("%d ",a[i]);
      }
      printf("\n");
        }
      printf("ѭ������%d\n",moves);
}
int SelectionSort(int a[])
{
	printf("ѡ����������\n"); 
	int i,j,min,minidx,temp,moves=0;
	for(i=0;i<10;i++)
	{
		min=a[i];
		minidx=i;
		for(j=i+1;j<10;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				minidx=j;
			}
		}
		
		printf("ÿ��ѭ���Ľ��");
        for(int k=0;k<10;k++)
             printf("%d ",a[k]);
        printf("\n");
        
		if(min<a[i])
		{
			temp=a[i];
			a[i]=min;
			a[minidx]=temp;
			 
		}
		moves++;
	}
	printf("ѭ������%d\n",moves);
	return (moves);
}

int main()
{
   printf("������10�����֣�\n"); 
   int a[10],b[10]; 
   for(int i=0;i<10;i++)
       scanf("%d",&a[i]);
       
   for(int i=0;i<10;i++)
       b[i]=a[i];
   
   Bubblesort(&a[0]);
   SelectionSort(&b[0]);
   return 0; 
}
