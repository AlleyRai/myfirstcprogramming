#include<stdio.h>
int factorial(int n);
void main (){
	int n1,result;
	printf("Enter the number :");
	scanf("%d",&n1);
	result=factorial(n1);
	printf("%d",result);
}
int factorial(int n){
	if((n-1)!=0 )
	{
		return n*factorial(n-1);
	}
		else{
			return n;
		}	
}
