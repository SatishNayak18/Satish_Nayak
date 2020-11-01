
#include <stdio.h> 
#include<math.h>
#include<stdbool.h>

// A utility function that returns true if x is perfect square 
bool isPerfectSquare(int x) 
{ 
	int s;
	s = sqrt(x); 
	return (s*s == x); 
} 

// Returns true if n is a Fibinacci Number, else false 
bool isFibonacci(int n) 
{ 
	// n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both 
	// is a perferct square 
	return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4); 
} 

int main() 
{ 
	int a[2],i;
	printf("Enter the 3 number is the series  respectively:");
	for(i=0 ;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	if((a[0]+a[1])==a[2])
	{
		if(isFibonacci(a[2]))
			printf("The given series is a fibonacci series!!!\n");
		else
			printf("The given series is not a fibonacci series!!!\n");
	}
	else
	{
		printf("The given series is not a fibonacci series!!!\n");
	}
	return 0; 
} 

