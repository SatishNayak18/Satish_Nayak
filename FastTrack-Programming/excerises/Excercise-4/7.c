/*Count number of vowels in string.*/
#include<stdio.h>
#include<string.h>

void countVowels(char s[]);


int main()
{
  //int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  fgets(s,sizeof(s),stdin);

  
  countVowels(s);
  return 0;
}

void countVowels(char s[])
{
	int c = 0, count = 0;
	while (s[c] != '\0') 
	{
		if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      			count++;
    	c++;
  	}
  	printf("Number of vowels in the string: %d", count);
}

