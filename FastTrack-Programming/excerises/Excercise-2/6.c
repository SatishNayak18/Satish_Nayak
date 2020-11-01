/* 6.Aircraft lands with a velocity of 320 km/hr and remaining runway length is 1400 mts.
 Aircraft deceleration is 2.85 m/s2 . 
 Check whether aircraft lands safely within the runway or not. 
 (final_velocity2  = initial_velocity2 + 2* acceleration * distance).*/

#include<stdio.h>

int square(int a)
{
	return a*a;
}
int main()
{
	int velocity;
	float deceleration,velo,runway,distance,initvel=0;
	printf("Enter the velocity in kmph:");
	scanf("%d",&velocity);
	printf("Enter the deceleration in m/s`2:");
	scanf("%f",&deceleration);
	printf("Enter the runway length in mts:");
	scanf("%f",&runway);
	 velo = (5*velocity)/18;
	 distance = (square(velo)-square(initvel))/(2*deceleration);
	 printf("The distance aircrafts needs to land is in mts:%.2f \n",distance);
	 if(runway >= distance)
	 {
	 	printf("aircraft lands safely within the runway\n");
	 }
	 else
	 {
	 printf("Aircraft crash lands\n");
	 }	
}
