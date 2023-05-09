#include<stdio.h>
void main (){
	int i;
	for(i=1;i<=7;i++){
			switch(i)
		{
			case 1: printf("The %dst day is Sunday\n",i);
			break;
			case 2: printf("The %dnd day is Monday\n",i);
			break;
			case 3: printf("The %drd day is Tuesday\n",i);
			break;
			case 4: printf("The %dth day is Wednesday\n",i);
			break;
			case 5: printf("The %dth day is Thrusday\n",i);
			break;
			case 6: printf("The %dth day is Friday\n",i);
			break;
			case 7: printf("The %dth day is Saturday\n",i);
		}
	}
}
