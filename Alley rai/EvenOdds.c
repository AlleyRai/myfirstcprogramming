#include<stdio.h>
int main (){
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	switch (a%2==1 && a%2==0){
		case 1: printf("The number is odd");
		break;
		case 2: printf("The number is even");
	}
	return 0;
}
