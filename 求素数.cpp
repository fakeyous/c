#include "stdio.h"
int main()
{
	int i,j,n;
	n=0;
	for(i=100;i<=200;i++)
	{
		j=2;
		while(i%j!=0)
		j++;
		if(i==j)
		{
			printf("%4d",i);
			n++;
			if(n%8==0)
			printf("\n");
		}
	}
	printf("\n"); 
}
