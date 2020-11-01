/*Write ‘n’ numbers into file. Write a function to sort the file in descending order.
 Don’t use arrays or temporary files.*/
 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	FILE fp;

	printf("Enter the dat file you want to open: ");
	scanf("%s",file_name);

	fp = fopen(file_name,"w")

	if(NULL == fp)
	{
		perror("file doesn't exist.");
		exit(0);
	}
	

	return 0;
}





