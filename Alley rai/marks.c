
#include<stdio.h>
void main () {
	int math,science,english;
	printf("Enter the marks of math :\n");
	scanf("%d",&math);
	printf("Enter the marks of science :\n");
	scanf("%d",&science);
	printf("Enter the marks of english :\n");
	scanf("%d",&english);
	if(math>=40 && science>=40 && english>=40)
	{
		int total=math+science+english;
		int per=total/3;
		if(per>80 && per<=100)
		{
			printf("You have secured A grade");	
		}
	else if(per>=60 && per<80)
	{
		printf("You have secured B grade");
	}else if(per>=40 && per<60)
	{
		printf("You have secured C grade");
	}
	}else{
		printf("You have failed your exam");
	}
}
