#include<stdio.h>
int natural(int n);
void main(){
	int n,result;
	printf("Enter the number :");
	scanf("%d",&n);
	result=natural(n);
	printf("%d",result);
}
int natural(int n){
	if((n-1)!=0)
	{
		return n+natural(n-1);
	}
	else{
		return n;
	}
}
