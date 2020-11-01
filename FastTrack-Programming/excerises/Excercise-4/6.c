/* Check whether the string is a palindrome  or not.*/

#include <stdio.h> 
#include<assert.h>
#include <string.h> 

int isPalindrome(char str[]) 
{ 
	// Start from leftmost and rightmost corners of str 
	int l = 0; 
	int h = strlen(str) - 1; 

	// Keep comparing characters while they are same 
	while (h > l) 
	{ 
		if (str[l++] != str[h--])  
			return 0; 
	} 
	return 1; 
} 

int main() 
{ 
	assert(isPalindrome("ababa")); 
	assert(isPalindrome("malayalam")); 
	assert(!isPalindrome("satish")); 
	return 0; 
}

