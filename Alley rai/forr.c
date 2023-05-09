#include<stdio.h>
void main (){
	int i;
	int a,b;
	for(i=1;i<=10;i++){
		if(i%2==0){
		a =i;
		}	else if(i%2==1)
		{
			b=i;
			}	
	}
	printf("%d the no is even",a);
	printf("%d the no is odd",b);
}
