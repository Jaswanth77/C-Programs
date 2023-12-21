#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter no. to swap:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n num1 = %d",a);
	printf("\n num2 = %d",b);

}
