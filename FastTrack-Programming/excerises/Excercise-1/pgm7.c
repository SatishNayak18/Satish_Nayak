#include<stdio.h>
#include<ncurses.h>
void printBinary(int num);//to remove warnings of implicit declarations

 
void main() {
   int i, count = 0;
   unsigned int num;
 
   printf("\nEnter the number:");
   scanf("%d", &num);
 
   printf("\nDecimal number in binary format :");
   printBinary(num);
 
   while (num != 0) {
      if (num & 1 == 1) {
         break;
      } else {
         count++;
         num = num >> 1;
      }
   }
   printf("\nTrailing Zeros : %d\n", count);
   getchar();//ncurses.h has to be instaled
}

 void printBinary(int num)
{
   int mask = 0x4000;
   if ((num & 0x8000) == 0)
      printf("0");
   else
      printf("1");
   while (mask != 0) {
      if ((num & mask) == 0)
         printf("0");
      else
         printf("1");
      mask = mask >> 1;
   }
}


