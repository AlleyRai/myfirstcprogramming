#include <stdio.h>
void main (){
	int a=6,b=3,c=9;
    int x=(a<b) || (a<c);
    	printf(" The statement x is: %d\n",x);
    int y=(a>b) || (a>c);
        printf("The statement y is: %d\n",y);
    int z=(b>a) || (b>c);
        printf("The statement x is: %d\n",z);
    int e=(c>a) || (c>b);
        printf("The statement e is: %d\n",e);  
}
