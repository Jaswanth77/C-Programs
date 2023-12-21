#include<stdio.h>

void main()
{
	int x,y,z;
	
	printf("\n Enter the values for x,y,z:");
	scanf("%d %d %d",&x,&y,&z);
	
	if((y<x && x<z) || (z<x && x<y))
	{
		printf("1");
	}
	else if((z<y && y<x) || (x<y && y<z))
	{
		printf("2");
	}
	else
	{
		printf("3");
	}
}
