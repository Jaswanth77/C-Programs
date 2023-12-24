#include<stdio.h>

void passByValue(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}

void passByReferrence(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	printf("\n Enter a and b :");
	scanf("%d %d",&a,&b);
	passByValue(a,b);
	printf("\n After swapping:");
	printf("\n Pass by value:");
	printf("\n a: %d b: %d",a,b);
	passByReferrence(&a,&b);
	printf("\n Pass by referrence:");
	printf("\n a: %d b: %d",a,b);
	return 0;
}
