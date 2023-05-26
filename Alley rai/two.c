#include<stdio.h>
void main (){
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the numbers :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",2*a[i]);
	}
}
