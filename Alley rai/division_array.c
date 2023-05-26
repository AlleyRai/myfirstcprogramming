#include<stdio.h>
void main (){
	int a[4]={9,10,8,25};
	int b[4]={3,2,4,5};
	int division[4];
	int i;
	for(i=0;i<4;i++)
	{
		division[i]=a[i]/b[i];
		printf("%d",division[i]);
	}
}
