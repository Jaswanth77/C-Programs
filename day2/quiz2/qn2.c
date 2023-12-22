#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char c;
	int len,i,j,n,k;
	printf("\n Enter the string:");
	scanf("%s",str);
	
	len = strlen(str);
	
	printf("\n");
	for(i=0;i<len;i++)
	{
		//convert char to no.
		n = str[i] - 48;
		if(n>=0 && n<=9)
		{
			c = str[i-1];
			for(k=i;k<len;k++)
			{
			if(str[i+1]>=48 && str[i+1]<=57)
			{
				n = n*10+(str[i+1]-48);
				i++;
				break;
			}
		    }
			for(j=0;j<n;j++)
			{
				printf("%c",c);
			}
		}
	}
}
