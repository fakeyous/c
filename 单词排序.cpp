#include <string.h>
#include <stdio.h>
#define N 50
#define M 26
void WordSort(char word[][M],int n)
{
	char key[M];
	int i,j;
	for(i=1;i<n;i++)
	{
		strcpy(key,word[i]);
		j=i;
		while(j>=1&&strcmp(word[j-1],key)>0)
		{
			strcpy(word[j],word[j-1]);
			j--;
		}
		strcpy(word[j],key);
	}
}
void print(const char word[][M],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\n",word[i]);
	}
}
int main()
{
	char word[N] [M];
	int m=M-1;
	int count=N;
	int n=0,i;
	while(n<1||n>50)
	{
		printf("�������㽫Ҫ����ĵ�������(1-%d)\n",count);
		scanf("%d",&n);
	}
	printf("������%d�����ʣ��Կո�ֿ�\n�����ʳ��Ȳ�����%d����������������Զ����Գ������֣�\n",n,m);
	for(i=0;i<n;i++)
	{
		scanf("%s",&word[i]);
		word[i][M-1]='\0';
	}
	WordSort(word,n);
	print(word,n);
	printf("�����������Ҫ�Ը�����߸����ĵ����������޸�N��M��ֵ\n");
}
