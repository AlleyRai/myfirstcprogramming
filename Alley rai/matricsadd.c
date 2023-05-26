#include<stdio.h>
void main (){
	int i,j;
	int array1[2][2];
	array1[0][0]=6;
	array1[0][1]=3;
	array1[1][0]=5;
	array1[1][1]=8;
	int array2[2][2];
	array2[0][0]=5;
	array2[0][1]=6;
	array2[1][0]=9;
	array2[1][1]=2;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array1[i][j]+array2[i][j]);
		}
			printf("\n");
	}
	
}
     
