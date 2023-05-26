#include<stdio.h>
int main(){
	int n;
	printf("enter ur num");
	scanf("%d",&n);
	int i;
	int a=0,b=1;
	int c;
	printf("%d",a);
	for(i=0;i<n;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d",c);
	}
	return 0;
}
