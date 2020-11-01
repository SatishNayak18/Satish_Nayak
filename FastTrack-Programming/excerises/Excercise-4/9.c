/*Implement your own string handling functions like string-length,
 string-copy, string-copy-nchars, string-concatenate */
#include <stdio.h>
int main() 
{
	char s1[100],s2[100],s3[100];
	int len, j,i;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	gets(s2);
 	

  // store length of s1 in the length variable
  len = 0;
  while (s1[len] != '\0') {
    ++len;
  }
printf("the length of s1:%d",len);
  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++len) {
    s1[len] = s2[j];
  }
printf("the length of s2:%d",j-1);
  // terminating the s1 string
  s1[len] = '\0';

  printf("After concatenation: ");
  puts(s1);
  
 for ( i = 0; s1[i] != '\0'; ++i) {
        s3[i] = s1[i];
    }

    s3[i] = '\0';
    printf("String s3: %s", s3);

  return 0;
}


