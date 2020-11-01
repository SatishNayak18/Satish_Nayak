/*Write a program to check whether two files are same.*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1 , *fp2;
	char file_name[20],ch1,ch2;
	int flag = 1;

	printf("Enter the 1st filename to open for reading: ");
	scanf("%s",file_name);

	fp1 = fopen(file_name,"r");//opens in read mode

	if(NULL == fp1)
	{
		perror("can't open the file");
		exit(0);
	}

	printf("Enter the 2nd filename to open for reading: "); 
    scanf("%s", file_name); 

	fp2 = fopen(file_name,"r");//open a file with write mode/creates a file with read mode

	if(NULL == fp2)
	{
		perror("can't open the file");
		exit(0);
	}

	ch1 = fgetc(fp1);
	ch2 = fgetc(fp2);

	while(ch1 != EOF )//|| (ch2 != EOF))
	{
		while(ch2 != EOF)
		{
			if(ch1 == ch2)
			{
				ch1 = fgetc(fp1);
				ch2 = fgetc(fp2);
			}
			else
			{
				flag = 0;
			}
		}		
	}

	if(flag == 1)
	{
		printf("The files are same...!!!");	
	}
	else
	{
		printf("files are not same...!!!");
	}
	
	fclose(fp2);
	fclose(fp1);

	return 1;
}


