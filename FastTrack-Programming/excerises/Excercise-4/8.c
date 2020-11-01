/*8.Given a vowel count the number of occurrence in string*/
#include<stdio.h>
#define MAXSIZE 1000
int vowel_calc(char s[],char ch) 
{ 
	int n = strlen(s);
	int sum = 0; 
	for (int i = 0; i < n; i++) 

		// Check if ith character is a vowel 
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
			|| s[i] == 'o' || s[i] == 'u') 
		{
			if(s[i]==ch)
				sum +=1;
		} 
	return sum; 
} 

int main() 
{ 
	char s[MAXSIZE],ch;
	printf("Enter the string:");
	gets(s);
	printf("Enter the character to search:");
	scanf("%c",&ch);
	printf("vowel count is:%d",vowel_calc(s,ch));
	return 0; 
} 

