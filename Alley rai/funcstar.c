#include<stdio.h>
void star();
void main(){
	star();
}
void star(){
	int num,i,j;
	printf("Enter the number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
