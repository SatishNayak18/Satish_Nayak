/* Modify the previous problem such that pattern may occur at multiple locations.
 Give the starting indices of the pattern.*/

#include<stdio.h>

int main()
{
	char str[100],s[]="ould";
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	
	int found;


    	mstrindex(str, s);

    	//printf("Found the start index: %d\n", found);
}

void mstrindex(char str[],char s[])
{
	int i,j,k,result;
	result =-1;
	for(i=0;str[i]!='\0';i++)
    	{
       	for(j=i,k=0;s[k]!='\0' && str[j]==s[k];j++,k++);
       	if(k>0 && s[k]=='\0')
       	{
       		result=i;
       		printf("index are: %d\n", result);
       	}
    	}
}
