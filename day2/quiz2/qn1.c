#include<stdio.h>

void main()
{
	int i,j;
	int matrix[3][3];
	
	printf("\n Enter the values for 3*3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the element:");
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
