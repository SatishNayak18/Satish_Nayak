#include <stdio.h>
 
int main()
{
   int n;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   if (n%2 == 0)
      printf("Even\n");/*here there was no double qoutes"*/
   else
      printf("Odd\n");
 
   return 0;
}
