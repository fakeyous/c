#include <stdio.h>
void Hanoi(int,char,char,char);
int n=0;
int main()
{
	int num;
	printf("请输入盘子个数：");
	scanf("%d",&num);
	printf("===========\n");
	Hanoi(num,'A','B','C');
	printf("===========\n");
}
void Hanoi(int num,char a,char b,char c)
{
	if(num==1)
	printf("Step%3d:%c-->%c\n",++n,a,c);
	else
	{
		Hanoi(num-1,a,c,b);
		printf("Step%3d:%c-->%c\n",++n,a,c);
		Hanoi(num-1,b,a,c);
	}
}
