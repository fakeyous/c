#include"stdio.h"
int main()
{
	int a,b;
	char op,answer='y';
	do
	{
		printf("--------���׼�����v1.0--------\n");
		printf("�������������������������");
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
				printf("������������������������룡\n");
				break;
		}
		printf("�Ƿ��ٴμ��㣬��Ҫ����y������n��");
		answer= getch();
	}while(answer=='y');
}
