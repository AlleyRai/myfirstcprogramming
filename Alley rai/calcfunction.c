#include<stdio.h>
int sum();
int sub();
int mul();
int div();
int mol();
void main (){
	int a,b,result;
	int symbol;
	printf("Enter the symbol :");
	scanf("%d",&symbol);
	switch(symbol){	
	    case 1: sum();
		break;
		case 2: sub();
		break;  
		case 3: mul();
		break;
		case 4: div();
		break;
		case 5: mol();
	}
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
