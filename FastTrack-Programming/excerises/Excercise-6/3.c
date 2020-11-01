/*Modify the 2nd program by passing the file names as command line arguments.*/
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1 , *fp2;
	char file_name[20],ch;
	if(argc != 3)
	{
		perror("Invalid no of arguments...!");
		exit(0);
	}
	
	fp1 = fopen(argv[1],"r");//opens in read mode

	if(NULL == fp1)
	{
		perror("can't open the file");
		exit(0);
	}


	fp2 = fopen(argv[2],"w");//open a file with write mode/creates a file with read mode

	if(NULL == fp2)
	{
		perror("can't open the target file");
		exit(0);
	}

	ch = fgetc(fp1);

	while(ch != EOF)
	{
		fputc(ch,fp2);
		ch = fgetc(fp1);
	}

	printf("\n copied file to %s",argv[2]);
	fclose(fp2);
	fclose(fp1);

	return 1;
}

