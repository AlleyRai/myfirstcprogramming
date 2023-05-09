#include<stdio.h>

void main(){
	int math,science,english;
	printf("Enter the marks obtained in math :\n");
	scanf("%d",&math);
	printf("Enter the marks obtained in science :\n");
	scanf("%d",&science);
	printf("Enter the marks obtained in english :\n");
	scanf("%d",&english);
	int total=math +science +english;
	int per=total/3;
	int a=per<100 && per>=80;
	int b=per<80 && per>=60;
	int c=per<60 && per>=40;
 if(a)
 {
 	printf("You have secured A grade");
 	
 }
 else if(b){
 	printf("You have secured B grade");
 	
 }
 else if(c)
 {
 	
 		printf("You have secured C grade");
 }
}
