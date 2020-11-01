/* 4.Convert velocity in km/hr to m/s. ( 1kph = 0.2777778 m/s ). */
#include<stdio.h>
#define M 0.2777778

int main()
{
	int k;
	float s;
	printf("Enter the Speed in km/hr:");
	scanf("%d",&k);
	s=k*M;
	printf("The Speed in m/s is:%fm/s \n",s);
	return 0;
}
