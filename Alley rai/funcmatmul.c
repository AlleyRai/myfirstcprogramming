#include<stdio.h>
void matmul();
void main(){
	matmul();
}
void matmul(){
	int i,j,k;
	int arr1[2][2]={(1,2),(6,8)};
	int arr2[2][2]={(3,4),(5,6)};
	int result[2][2]={0};
	for(i=0;i<2;i++){
		for(j=0;j<2;i++){
			for(k=0;k<2;k++){
				result[i][j]+=arr1[i][k] * arr2[k][j];
			}
		}
	}
	printf("result:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;i++)
		{
			printf("%d	",result[i][j]);
		}
		printf("\n");
	}
}
