#include<stdio.h>
void main (){
	int num,i,j;
	printf("Enter the row required :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
    for(i=num+1;i>=1;i--)
	{
    	for(j=1;j<=i;j++)
		{
    		printf("*");
		}
		printf("\n");
	}
}
