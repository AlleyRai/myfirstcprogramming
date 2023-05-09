#include<stdio.h>
int main(){
	int n=351;
	int r,sum=0;
	int temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("The number is an armstrong number");
	}
	else{
		printf("The number is not an armstrong number");
	}
	return 0;
}
