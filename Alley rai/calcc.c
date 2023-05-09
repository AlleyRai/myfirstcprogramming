#include<stdio.h>
void main (){
	int a,b,result;	
	printf("Enter the first number :");
	scanf("%d",&a);
	char symbol;
	printf("Enter the symbol :\n");
	scanf("%c",&symbol);
	printf("Enter the second number : \n");
	scanf("%d",&b);	
	switch(symbol){
		case '+': printf("%d + %d = %d",a,b,a+b);
		break;
		case '-': printf("%d - %d = %d",a,b,a-b);
		break;  
		case '*': printf("%d * %d = %d",a,b,a*b);
		break;
		case '/': printf("%d / %d = %d",a,b,a/b);
		break;
		case '%': printf("%d % %d =%d",a,b,a%b);
    }
    
	}
