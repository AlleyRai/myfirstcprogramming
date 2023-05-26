#include<stdio.h>
int alley();
int alley(){
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	return a+b;
}
int main(){
	int sum=alley();
	printf("%d",sum);		
	return 0;
}
