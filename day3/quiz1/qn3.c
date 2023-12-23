#include<stdio.h>

int maxSubArray(int* nums,int len)
{
	int Finalmax = nums[0];
	int max = nums[0],i;
	
	for(i=0;i<len;i++)
	{
		if(max+nums[i] > nums[i])
		{
			max = max+nums[i];
		}
		else
		{
			max = nums[i];
		}
		if(max > Finalmax)
		{
			Finalmax = max;
		}
	}
	
	return Finalmax;
}

void main()
{
	int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
	int size = sizeof(nums)/sizeof(nums[0]);
	int result = maxSubArray(nums,size);
	printf("Max sum:%d",result);
}
