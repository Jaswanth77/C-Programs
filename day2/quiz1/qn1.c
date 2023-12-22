#include<stdio.h>

void main()
{
	int size;
	float area;
	char shape;
	
	printf("\n Enter the shape (c - circle and s - square) :");
	scanf("%c",&shape);
	
	printf("\n Enter the size :");
	scanf("%d",&size);
	
	if(shape == 'c' || shape == 'C')
	{
		area = 3.14*size*size;
		printf("\n Area of circle: %f",area);
	}
	else if(shape == 's' || shape == 'S')
	{
		area = size*size;
		printf("\n Area of square: %f",area);
	}
	else
	{
		printf("\n Enter the correct choice");
	}
}
