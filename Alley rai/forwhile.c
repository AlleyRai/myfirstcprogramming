#include<stdio.h>
void main (){
	int num,i,j;
	printf("Enter the num :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		int j=1;
		while(j<=num){
			printf("%d",j);
			j++;
		}
		printf("\n");
	}
}
