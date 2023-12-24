#include<stdio.h>

void FirstAndLast(int arr[],int x,int size)
{
	int index[] = {-1,-1};
	int i;
	
	for(i=0;i<size;i++)
	{
		if(arr[i] == x)
		{
			if(index[0]>-1)
			{
				index[1] = i;
			}
			else
			{
				index[0] = i;
			}
		}
		else if(arr[i]>x)
		{
			if(index[0]>-1 && index[1] == -1 )
	        {
		        index[1] = index[0];
	        }
			printf("\n 1st:%d",index[0]);
	        printf("\n last:%d",index[1]);
	        break;
		}
	}
	if(index[0]>-1 && index[1] == -1 )
	{
		index[1] = index[0];
	}
	printf("\n 1st:%d",index[0]);
	printf("\n last:%d",index[1]);
}

int main()
{
	int target,size,i;
	int arr[] = {1,3,5,5,5,6,8,11};
	size = sizeof(arr)/sizeof(arr[0]);
	printf("\n Elements of array:");
	for(i=0;i<size;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n Enter the target element:");
	scanf("%d",&target);
	FirstAndLast(arr,target,size);
	return 0;
}
