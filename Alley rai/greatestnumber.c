#include<stdio.h>
void alley(int a,int b,int c);
void main (){
	alley(2,6,4);	
}
void alley(int a,int b,int c){
	if(a>b && a>c){
		printf("a is the greatest number.");
	}
	else if(b>a && b>c){
		printf("b is the greatest number.");
	}
	else{
		printf("c is the greatest number.");
	}
}
