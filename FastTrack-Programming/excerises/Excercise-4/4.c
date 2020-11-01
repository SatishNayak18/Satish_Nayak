/*Sort the numbers in ascending and descending order.*/


#include <stdio.h>

void sort(int number[],int n) ;
void main ()
{
	int number[30];
	int i,n;
	printf("Enter the value of N\n");
	scanf("%d", &n);
	printf("Enter the numbers \n");
	for (i = 0; i < n; ++i)
		scanf("%d", &number[i]);
	sort(number,n);
        printf("The numbers arranged in descending order are given below\n");
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
        
        printf("The numbers arranged in accending order are given below\n");
        for (i = n-1; i >=0; --i) 
        {
            printf("%d\n", number[i]);
        }
}
void sort(int number[],int n) 
{
	int i, j, a;
	for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
}

