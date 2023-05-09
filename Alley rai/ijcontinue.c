#include<stdio.h>
void main (){
	int i;
	int j;
	for(i=1;i<=10;i++)
	{        
		for(j=1;j<=10;j++){
			if(j==5){
				continue;
			}
			
				printf("%d",j);
		}
		printf("\n");
	}
}

