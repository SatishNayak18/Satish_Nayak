/*Compute  first 3  maximum numbers in the given list.*/

#include<stdio.h>
#include<assert.h>
#define SIZE 10

void find3Maximum(int arr[],int n,int *fmax,int *smax,int *tmax);
int main()
{
	int arr[SIZE],n;
	int fmax,smax,tmax;
	fmax=smax=tmax=0;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	find3Maximum(arr,n,&fmax,&smax,&tmax);	
	assert(fmax==99);
	assert(smax==56);
	assert(tmax==46);
}

void find3Maximum(int arr[],int n,int *fmax,int *smax,int *tmax)
{
	for(int i=0;i<n;i++)
	{
		if(*fmax < arr[i])
		{
			*tmax = *smax; 
            		*smax = *fmax; 
			*fmax=arr[i];
		}
		else if(*smax < arr[i])
		{
			*smax = *fmax; 
			*smax=arr[i];
		}
		else if(*tmax < arr[i])
			*tmax=arr[i];
	}
}
