#include<stdio.h>
int main()
{
int arr[2][2],brr[2][2],i,j,k;
printf("enter first matrix \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)							//		|00  01|
	{											//		|10  11|
	scanf("%d",&arr[i][j]);
	}
printf("\n");
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)							//		|00  01|
	{											//		|10  11|
	printf("%d",&arr[j][i]);
	}
printf("\n");
}
}

