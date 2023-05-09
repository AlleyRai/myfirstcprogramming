#include<stdio.h>
void main (){
	int a;
	printf("Enter the day :");
	scanf("%d",&a);
	if(a>=1 && a<=7){
		switch(a){
			case 1: printf("Today is Sunday\n");
			
			case 2: printf("Today is Monday\n");
			
			case 3: printf("Today is Tuesday\n");
			
			case 4: printf("Today is Wednesday\n");
			 
			case 5: printf("Today is Thursday\n");
			
			case 6: printf("Today is Friday\n");
			  break;
			case 7: printf("Today is Saturday\n");
		}
	}
}
