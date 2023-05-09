#include<stdio.h>
#include<stdbool.h>
void main ()
{
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	bool voter = false; 
	if (age>18){
		printf("You are a voter");
	}
	else 
	{
		printf("You are not a voter");
	}
}
