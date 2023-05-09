#include<stdio.h>
void main (){
	int a=2,b=7,c=5;
	int x=(a>b) != (a>c);
	printf("The statement x is: %d\n",x);
	int y=(b>a) != (b>c);
	printf("The statement y is: %d\n",y);
	int z=(c>a) != (c>b);
	printf("The statement z is: %d\n",z);
	int e=(b<a) != (c<b);
	printf("The statement e is: %d\n",e);
}
