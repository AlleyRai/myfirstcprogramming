#include<stdio.h>
void armstrong(int a);

void calculator()




void main (){
	int b;
	printf("enter the no whic is you want the value is armstrong or not:");
	scanf("%d",&b);
	armstrong(b);
	calculator()
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
		printf("The number %d is not an armstrong number.",temp);
	}
}

void calculator(){
	
}
