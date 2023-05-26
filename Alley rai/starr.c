#include<stdio.h>
void main (){
	int num,i,j;
	printf("Enter the num :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf(" ");
		int j=1;
		while(j<=i){
			printf("*");
		    j++;
		}
		printf("\n");
	}
}
