#include<stdio.h>
int main()
{
	int *ip;
	int ia[10]={65,66,67,68,69,70,71,72,73,74};
	ip=ia;

	for(int i=0;i<6;i++)
	{
		printf("%d\t",*ip++);
	}
	printf("\n");
}