/*Write a function that splits the full name store in one array into first-name, 
middle-name and last-name. Names are separated by blank spaces.*/

#include<stdio.h>

int main()
{
    char str1[100],str2[100],str3[100];
    int i=0,j=0,k=0,l=0;
    printf("Enter the Full Name:");
    fgets(str1,sizeof(str1),stdin);
        while(str1[i] !=' ' && str1[i]!='\0')
        {
          str2[j] =str1[i];
          i++;
          j++;
        }
        i++;
        while(str1[i] != ' ' && str1[i] !='\0')
        {
          str3[k] =str1[i];
          k++;
          i++;
        }
        i++;
        while(str1[i] != ' ' && str1[i] !='\0')
        {
          str1[l] =str1[i];
          l++;
          i++;
        }
        
        str2[j] = '\0';
        str3[k] = '\0';
        str1[l] = '\0';
        printf("String s1: %s\n", str2);
        printf("String s2: %s\n", str3);
        printf("String s3: %s\n", str1);
    return 0;
}
