#include<stdio.h>
void main (){
	int num,i;
	int result=0;
	printf("Enter the number :");
	scanf("%d",&num);
	for (i=2;i<=num/2;i++)
	{
		if(num%i==0){
			result=1;
			break;
		}
	}if(result==0){
		printf("The number is a prime number ");
		}
		else{
			printf("The number is a composite number ");
		}
	
}
