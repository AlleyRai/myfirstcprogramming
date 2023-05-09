#include<stdio.h>
void main(){
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	if(a<=7 && a>=0);//The value of a is lesser than seven and greater than 0
	/*There are 7 cases which shows all the seven days of the week
	by adding switch
	*/
	{
		switch(a)
		{
			case 1: printf("Today is Sunday");
			break;
			case 2: printf("Today is Monday");
			break;
			case 3: printf("Today is Tuesday");
			break;
			case 4: printf("Today is Wednesday");
			break;
			case 5: printf("Today is Thrusday");
			break;
			case 6: printf("Today is Friday");
			break;
			case 7: printf("Today is Saturday");
		}
	}
	else
	{
		printf("invalid number");
	}
}
