#include<stdio.h>

void main()
{
	int total_hrs_need,num_days,num_workers;
	
	printf("\n Enter the total no. of hours needed:");
	scanf("%d",&total_hrs_need);
	
	printf("\n Enter no. of days:");
	scanf("%d",&num_days);
	
	printf("\n Enter the no. of workers:");
	scanf("%d",&num_workers);
	
	//As 10% days are given for training
	int actual_work_days = num_days*9/10;
	
	//Here, each day consist of 8 regular working hours and 2hrs in overtime
	int actual_work_hrs = actual_work_days*(10)*num_workers;
	
	if(actual_work_hrs>=total_hrs_need)
	{
		int hrs_need = actual_work_hrs - total_hrs_need;
		printf("\n Not enough time! %d hours needed",hrs_need);
	}
	else
	{
		int hrs_left = total_hrs_need - actual_work_hrs ;
		printf("\n Yes! %d hours left",hrs_left);
	}
}
