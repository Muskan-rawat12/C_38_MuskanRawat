
#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter the value for n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
	for(s=0;s<n-i;s++)
	{
		printf(" ");
	}
		for(j=0;j<=i;j++)
		{   
			printf("*");
		}
		
		for(int k=i+1;k<n-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
