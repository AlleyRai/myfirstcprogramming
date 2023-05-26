#include<stdio.h>
int alley(int a,int b,int c);
void main (){
alley(3,7,5);	
	printf("The sum of the numbers are : %d",alley(3,7,5));
}
int alley(int a,int b,int c){
	return a+b+c;
}
