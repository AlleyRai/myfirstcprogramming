#include<stdio.h>
void main(){
	int i=1;
	int sumofeven;
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	while(i<=a){
    if(i%2==0){
    	sumofeven+=i;
	}
	i++;
	}
	printf("The sum of even numbers is :%d",i);
}
