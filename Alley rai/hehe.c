#include<stdio.h>
void armstrong(int a);
void calculator();

void main (){
	int b;
	printf("Enter the no which you want the value of to be armstrong or not:");
	scanf("%d",&b);
	armstrong(b);
	calculator();
}
void armstrong(int a)
{
	int n=a;
	int r,sum=0;
	int temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("The number %d is an armstrong number.",temp);	
	}
	else{
		printf("The number %d is not an armstrong number.\n",temp);
	}
}

void calculator(){
	int a,b;
	char symbol;
	printf("\nEnter the symbol :");
	scanf("%c",&symbol);
	printf("\nEnter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	switch(symbol){
		case '+': printf("%d + %d = %d",a,b,a+b);
		break;
		case '-': printf("%d - %d = %d",a,b,a-b);
		break;
		case '*': printf("%d * %d =	%d",a,b,a*b);
		break;	
		case '/': printf("%d / %d = %d",a,b,a/b);
		break;
		case '%': printf("%d % %d =	%d",a,b,a%b);
	}
}
