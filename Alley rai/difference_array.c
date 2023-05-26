#include<stdio.h>
void main (){
	int a[4]={9,7,8,6};
	int b[4]={3,2,4,5};
	int difference[4];
	int i;
	for(i=0;i<4;i++)
	{
		difference[i]=a[i]-b[i];
		printf("%d",difference[i]);
	}
	
}
