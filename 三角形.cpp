#include "stdio.h"
#include <math.h>
int isTriangle(double a,double b,double c){
	if((a+b)>c&&(b+c)>a&&(a+c)>b)
	return 1;
	else return 0;
}
int ZJ(double a,double b,double c){
	if(a*a+b*b==c*c||a*a+c*c==b*b||a*a==b*b+c*c)
	return 1;
	return 0;
}
int main(){
	double a,b,c,s,p;
	int istriangle=0,zj=0;
	printf("������3���������ո������\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%lf%lf%lf",a,b,c);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	istriangle=isTriangle(a,b,c);
	if(istriangle)printf("����,����ǣ�%lf\n",s);
	else printf("������\n");
	zj=ZJ(a,b,c);
	if(zj)printf("��ֱ��������\n");
	else printf("����ֱ��������\n");
}
