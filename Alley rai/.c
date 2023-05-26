#include<stdio.h>
void main (){
	char a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter your name :");
		scanf("%c /n",&a[i]);  		
	}
     for(i=0;i<5;i++){
     	printf("%c",a[i]);
	 }
}

