#include<stdio.h>
void main (){
	int i;
	int a=0;
	int b=0;
	for(i=1;i<=10;i++)
	{
		if(i%2==0){
			a+=i;
		}else{
			b+=i;
		}
	}	
printf("The sum of even numbers is: %d and even numbers is: %d",a,b);	
}
