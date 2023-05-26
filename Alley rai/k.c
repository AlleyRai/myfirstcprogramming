#include<stdio.h>
void main (){
	int i,j,k;
	int array1[2][2];
	int array2[2][2];
	array1[0][0]=2;
	array1[0][1]=3;
    array1[1][0]=5;
	array1[1][1]=6;
	array2[0][0]=5;
	array2[0][1]=6;
	array2[1][0]=4;
	array2[1][1]=2;
	int result[2][2]={0};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				result[i][j]+=array1[i][k]*array2[k][j];
			}
		}
	}
	printf("result:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d	",result[i][j]);
		}
		printf("\n");
}
}

