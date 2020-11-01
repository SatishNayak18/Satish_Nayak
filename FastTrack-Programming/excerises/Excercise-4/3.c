/* 3.Add some grace marks to the internal scores. Care should be taken such that after adding grace, 
score should not exceed the max marks (50). Marks to be added are 45 -49  2 marks, 40 – 44  3 marks, 
35 – 39  4 marks, 30 – 34  5 marks 25 – 29 it will be 6 marks. 
Those who scored less than 25, marks are boosted to 25. Check whether added marks are correct using assert.*/

#include<stdio.h>
#include <assert.h>

int graceMarks(int marks);

int main()
{
	int marks;
	printf("Enter the marks obtained by the student: ");
	scanf("%d", &marks);
        if(marks>=45 && marks<=49)
                marks=marks+2;    
        else if(marks>=40 && marks<=44)
                marks=marks+3;
     	else if(marks>=35 && marks<=39)
                marks=marks+4;
        else if(marks>=30 && marks<=34)
                marks=marks+5;
     	else if(marks>=25 && marks<=29)
                marks=marks+6;
        else if(marks<25)
                marks=25;

   	assert (graceMarks(marks) ==36);
}

int graceMarks(int marks)
{
	if(marks>=45 && marks<=49)
                marks=marks+2;    
        else if(marks>=40 && marks<=44)
                marks=marks+3;
     	else if(marks>=35 && marks<=39)
                marks=marks+4;
        else if(marks>=30 && marks<=34)
                marks=marks+5;
     	else if(marks>=25 && marks<=29)
                marks=marks+6;
        else if(marks<25)
                marks=25;
}
