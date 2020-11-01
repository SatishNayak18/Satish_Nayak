/* 8.Write a program to calculate the sum of digits of a number.*/ 
#include<stdio.h>
 
 void main()
 {
 	int sum,n,d;
 	printf("Enter the number:");
 	scanf("%d",&n);
 	if(n>9)
 	{
 		sum=0;
 		while(n!=0)
 		{
 			d = n % 10;
 			sum = sum + d;
 			n = n / 10;
 		}
 		printf("The sum of digits of a number is : %d\n",sum);
 	}
 	else
 	{
 		printf("The sum of digits of a number is : %d\n",n);
 	}
 	
 }
