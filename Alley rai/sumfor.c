#include<stdio.h>
void main (){
	int num,i;
	printf("Enter the number :");
	scanf("%d",&num);
	int sum=0;
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("The sum of number from 1 to %d is : %d",num,sum);
}
