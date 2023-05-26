#include<stdio.h>
int sum();
int sub();
int div();
int mul();
int mol();
void main(){
	sum();
	sub();
	div();
	mul();
	mol();	
}
int sum(){
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("The sum is: %d\n",a+b);
	return 0;
}
int sub(){
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("The sub is: %d\n",a-b);
	return 0;
}
int div(){
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("The div is: %d\n",a/b);
	return 0;	
}
int mul(){
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("The mul is: %d\n",a*b);
	return 0;	
}
int mol(){
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("The mol is: %d\n",a%b);
	return 0;	
}
