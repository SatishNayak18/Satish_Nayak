

#include<stdio.h>
#include <ctype.h>
void main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	
	if(isalpha(ch))
	{
		if(isupper(ch))
		{
			printf("Given Character : %c \n",ch);
  			printf("After Case changing : %c \n",ch+32);  
		}
		else
		{
			printf("Given Character : %c \n",ch);
  			printf("After Case changing : %c \n",ch-32); 
		}
	}
	else
	{
		printf("Given Character is not an alphabet.....!!!\n");
	}
	
}
