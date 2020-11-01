

#include<stdio.h>

float seriessum( int n)
{
	int f=1,i=1;
	float sum =0;
	while(i<=n)
	{
		sum = sum +1.0/f;
		
		i=i+1;
		f=f*i;
	}
	return sum;
}

int main()
{
	int n;
	printf("Enter the Number:");	
	scanf("%d",&n);
	
	printf("The sum is %f",seriessum(n));
}
