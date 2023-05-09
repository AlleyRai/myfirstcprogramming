#include <stdio.h>
void main (){
	int a=6,b=3,c=9;
    int x=(a<b) || (a<c);
    	printf(" The statement x is: %d",x);
    int y=(a>b) || (a>c);
        printf("The statement y is: %d",y);
    int z=(b>a) || (b>c);
        printf("The statement x is: %d",z);
    int e=(c>a) || (c>b);
        printf("The statement e is: %d",e);  
}
