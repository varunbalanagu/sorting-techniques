#include<stdio.h>
int main()
{
	int n,t,k;
	scanf("%d",&n);
	int arr[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
    	}
			for(k=0;k<n;k++)
		{
			printf("%d",arr[k]);
			
		}
		printf("\n");
		

	}
		
		
	}
	
		
	
	

