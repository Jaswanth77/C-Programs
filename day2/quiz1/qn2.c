#include<stdio.h>
#define max 20
void main()
{
	int n,i,curr_element,curr_freq;
	int arr[max];
	
	printf("\n Enter the length of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	   printf("\n Enter element:");
	   scanf("%d",&arr[i]);	
	}
	
	curr_element = arr[0];
	curr_freq = 1;
	
	for(i=1;i<n;i++)
	{
		if(arr[i] == curr_element)
		{
			curr_freq++;
		}
		else
		{
			if(curr_freq > 1)
			{
				printf("\n %d -> %d",curr_element,curr_freq);
			}
			curr_element = arr[i];
		    curr_freq = 1;
		}
	}
	
	if(curr_freq > 1)
	{
		printf("\n %d -> %d",curr_element,curr_freq);
	}
}
