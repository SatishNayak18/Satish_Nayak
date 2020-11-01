#include <stdio.h> 
#include<string.h>
void printRoman(int n) 
{ 
    	int num[] = {1,4,5,9,10,40,50,90,100,400,500,900};//1000}; upto 1000
    	char *sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM"};//,"M"}; upto 1000; 
    	int i=11;//for 1000 make i=12; 
    	printf("The roman numeral is:");    
    	while(n>0) 
    	{ 
      		int div = n/num[i]; 
      		n = n%num[i]; 
      		while(div--) 
      		{ 
        		printf("%s",sym[i]);
      		} 
      		i--; 
    	} 
    	printf("\n");
} 
  
int main() 
{ 
   	int n;
   	printf("Enter the number :");
   	scanf("%d",&n);
  
   	printRoman(n); 
  
    	return 0; 
} 	
