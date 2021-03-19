#include"stdio.h"
int main()
{
	int a,b;
	char op,answer='y';
	do
	{
		printf("--------简易计算器v1.0--------\n");
		printf("请输入两个操作数和运算符：");
		scanf("%d%c%d",&a,&op,&b);
		switch(op)
		{
			case'+':
				printf("%d+%d=%d\n",a,b,a+b);
				break;
			case'-':
				printf("%d-%d=%d\n",a,b,a-b);
				break;
			case'*':
				printf("%d*%d=%d\n",a,b,a*b);
				break;
			case'/':
				printf("%d/%d=%d\n",a,b,a/b);
				break;
			default:
				printf("输入错误的运算符，请重新输入！\n");
				break;
		}
		printf("是否再次计算，需要输入y，否则n：");
		answer= getch();
	}while(answer=='y');
}
