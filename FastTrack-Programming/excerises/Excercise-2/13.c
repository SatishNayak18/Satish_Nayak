//13.Check entered number is a palindrome.

#include<stdio.h>

int main()
{
	int n,originalNum,reverseNum=0,rem;
	printf("Enter the Number:");
	scanf("%d",&n);
	
	originalNum = n;
	
	while(n!=0)
	{
		rem = n%10;
		reverseNum = reverseNum*10 +rem;
		n=n/10;//n/=10
	}
	if(originalNum == reverseNum)
		printf("The given number %d is a palindrome.!!!\n",originalNum);
	else
		printf("The given number %d not is a palindrome.!!!\n",originalNum);
}
