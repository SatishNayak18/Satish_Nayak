/*Write a function which checks whether a pattern is present in the given sentence. 
If pattern is present, return the starting index.*/

#include<stdio.h>

int main()
{
	char str[100],s[]="ould";
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	
	int found;


    	found = mstrindex(str, s);

    	printf("Found the start index: %d\n", found);
}

int mstrindex(char str[],char s[])
{
	int i,j,k,result;
	result =-1;
	for(i=0;str[i]!='\0';i++)
    	{
       	for(j=i,k=0;s[k]!='\0' && str[j]==s[k];j++,k++);
       	if(k>0 && s[k]=='\0')
       	{
       		result =i;
       		break;
       	}
    	}
    	return result;
	
}
