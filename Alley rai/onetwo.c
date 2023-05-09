#include<stdio.h>
void main ()
{
	int i;
	int j;
	for(i=10;i>=1;i--)
	{   
		for(j=10;j>=i;j--)
		{			
				printf("%d",j);
		}
		printf("\n");
	}
}
