/* Convert joules to kilowatt hour. 
( 1kW = J / (1000 * S)  where S is in seconds ) .
Example: What is the power consumption of an electric circuit 
that has energy consumption of 90J for time duration of 3 seconds? */

#include<stdio.h>

int main()
{
	float j,k;//j is for Joules and k for kilowatt
	int s;//s is for time
	printf("Enter the energy consumption in Joules:");
	scanf("%f",&j);
	printf("Enter the time duration in seconds:");
	scanf("%d",&s);
	k=j/(1000*s);//kw conversion
	printf("The energy consumption of %fJ for time duration of %d seconds is : %f kW\n",j,s,k);	
}

