#include"stdio.h"
int peachcount(int n){
	int count=1;
	int i;
	for(i=1;i<n;i++){
		count=(count+1)*2;
	}
	return count;
}
int main()
{
	int n;
	int count;
	printf("---猴子吃桃问题---\n");
	printf("请输入猴子在第几天吃得只剩一个桃子：");
	scanf("%d",&n);
	count=peachcount(n);
	printf("猴子在第%d天吃得只剩一个桃子，",n);
	printf("第一天摘下了%d个桃子\n",count);
}
