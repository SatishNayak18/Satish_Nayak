/*Write a program to copy the contents of one file to another.*/
#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1 , *fp2;
	char file_name[20],ch;

	printf("Enter the filename to open for reading ");
	scanf("%s",file_name);

	fp1 = fopen(file_name,"r");//opens in read mode

	if(NULL == fp1)
	{
		perror("can't open the file");
		exit(0);
	}

	printf("Enter the filename to open for writing \n"); 
    scanf("%s", file_name); 

	fp2 = fopen(file_name,"w");//open a file with write mode/creates a file with read mode

	if(NULL == fp2)
	{
		perror("can't open the file");
		exit(0);
	}

	ch = fgetc(fp1);

	while(ch != EOF)
	{
		fputc(ch,fp2);
		ch = fgetc(fp1);
	}

	printf("\n copied file to %s",file_name);
	fclose(fp2);
	fclose(fp1);

	return 1;
}

