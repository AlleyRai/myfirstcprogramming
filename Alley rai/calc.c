#include<stdio.h>
void main (){
	int a,b,result;
	char symbol;
	printf("Enter the symbol :");
	scanf("%c",&symbol);
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	switch (symbol){
		case '+': printf("%d + %d = %d",a,b,a+b);
		break;
		case '-': printf("%d - %d = %d",a,b,a-b);
		break;
		case '*': printf("%d * %d = %d",a,b,a*b);
		break;
		case '/': printf("%d / %d = %d",a,b,a/b);
		break;
		case '%': printf("%d % %d = %d",a,b,a%b);		
	}	
}
