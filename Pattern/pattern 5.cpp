/* 

    1
   123
  12345
 1234567
123456789

*/

#include<stdio.h>
int main()
{
	int n,i,j,sp;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(sp=0;sp<n-i-1;sp++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
}
