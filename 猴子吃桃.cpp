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
	printf("---���ӳ�������---\n");
	printf("����������ڵڼ���Ե�ֻʣһ�����ӣ�");
	scanf("%d",&n);
	count=peachcount(n);
	printf("�����ڵ�%d��Ե�ֻʣһ�����ӣ�",n);
	printf("��һ��ժ����%d������\n",count);
}
