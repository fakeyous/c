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
		printf("请输入你将要输入的单词数：(1-%d)\n",count);
		scanf("%d",&n);
	}
	printf("请输入%d个单词，以空格分开\n（单词长度不超过%d，若超出，程序会自动忽略超出部分）\n",n,m);
	for(i=0;i<n;i++)
	{
		scanf("%s",&word[i]);
		word[i][M-1]='\0';
	}
	WordSort(word,n);
	print(word,n);
	printf("程序结束，若要对更多或者更长的单词排序请修改N，M的值\n");
}
