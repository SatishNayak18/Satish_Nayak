/*3.Convert watts to luminous flux. 
(ΦV(lm) = P(W) × η(lm/W)
lumens = watts × (lumens per watt)
Example:  What is the luminous flux of a lamp that has power consumption of 60 watts and luminous efficacy of 15 lumens per watt?*/

#include<stdio.h>

int main()
{
	float w,e,l;//w for power consumption in Watts,e for luminous efficacy in lumens per watt,l for luminous flux.
	printf("Enter the power consumption in Watts:");
	scanf("%f",&w);
	printf("Enter the luminous efficacy in lumens per watt:");
	scanf("%f",&e);
	
	l = w * e;
	printf("The luminous flux of a lamp that has power consumption of %fwatts and luminous efficacy of %f lumens per watt is :%f ΦV\n",w,e,l);	
}

