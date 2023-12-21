#include<stdio.h>

void main()
{
	int year,week,days,total_days;
	
	printf("Enter the total no. of days:");
	scanf("%d",&total_days);
	
	year = total_days/365;
	days = total_days%365;
	week = days/7;
	days = days%7;
	
	printf("years:%d",year);
	printf("weeks:%d",week);
	printf("days:%d",days);

}
