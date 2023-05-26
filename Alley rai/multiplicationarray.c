#include<stdio.h>
void main (){
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,5,4};
	int multiplication[5];
	int i;
	for(i=0;i<5;i++)
	{
		multiplication[i]=a[i]*b[i];
		printf("%d",multiplication[i]);
	}
}
