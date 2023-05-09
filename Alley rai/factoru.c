#include<stdio.h>
void main (){
	int i;
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	int fact=1;
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	printf("%d",fact);
}
