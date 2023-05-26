#include<stdio.h>
void main (){
	int a[5];
	int i;
	int b[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the numbers :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		b[i]=2*a[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
	
}
