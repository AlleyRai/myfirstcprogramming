#include<stdio.h>
int armstrong(int a);
int calculator();

void main (){
		calculator();
	int b;
	printf("Enter the no which you want the value of to be armstrong or not:");
	scanf("%d",&b);
	armstrong(b);

}



int armstrong(int a)
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
		printf("The number  is an armstrong number.");	
	}
	else{
		printf("The number  is not an armstrong number.");
	}
	printf("\n");
return 0;
}

int calculator(){
	int a,b;
	char s;
	printf("Enter the symbol :");
	scanf("%c",&s);
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	switch(s){
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
	printf("\n");
	return 0;
}
