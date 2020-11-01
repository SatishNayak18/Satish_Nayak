

#include<stdio.h>

int mstrindex(char source[],char searchfor[]);

int main(void)
{
    char line[] = "Ah Love! could you a I with Fate conspire To grasp this sorry scheme of things entire,Would not we shatter it to bits --- and then Re-mould it nearer to the Heart’s Desire!";
    char pattern[] = "ould";

    int found;


    found = mstrindex(line, pattern);

    printf("Found the start index: %d\n", found);

}

int mstrindex(char s[],char t[])
{
    int i,j,k, result;

    result = -1;

    for(i=0;s[i]!='\0';i++)
    {
        for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++);
            
        if(k>0 && t[k] == '\0')
            {
            result = i;
            break;
            }
    }
    return result;
}
