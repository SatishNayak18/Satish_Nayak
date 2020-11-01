/*Write a program to count number of characters, spaces tabs and lines in a file.*/
#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1 ;
	int c = 0,s = 0,l = 0;
	char file_name[20],ch;

	printf("Enter the filename to open for reading ");
	scanf("%s",file_name);

	fp1 = fopen(file_name,"r");//opens in read mode

	if(NULL == fp1)
	{
		perror("can't open the file");
		exit(0);
	}

	ch = fgetc(fp1);

	while(ch != EOF)
	{
		if (ch == ' ')
		{
			s += 1;
		}
		else if (ch == '\n')
		{
			l += 1;
		}
		else
		{
			c += 1;
		}
		ch = fgetc(fp1);
	}

	printf("\n No of characters ,space tabs and line are %d, %d, %d", c ,s ,l );
	fclose(fp1);

	return 1;
}
