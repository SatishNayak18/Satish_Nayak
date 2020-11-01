/*Write a simple program to display the contents of a file.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch,file_name[30];
	FILE *fp;

	printf("Enter the filename you wish to open:");
	//fgets(file_name,sizeof(file_name),stdin);
	gets(file_name);

	fp = fopen(file_name,"r");// opens in readmode

	if (fp == NULL)
   	{
    	perror("Error while opening the file.\n");
     	exit(EXIT_FAILURE);
   	}

   	printf("The contents of %s files are:",file_name);

   	while((ch = fgetc(fp)) != EOF)
   		printf("%c",ch);

   	fclose(fp);
   	return 0;
}