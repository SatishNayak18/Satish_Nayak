/* 2.Write a function get-grade-count() which returns the number of students
 who are in the same grade. 
 The required grade to be given to the function. */
 
 #include<assert.h>
 #define LEN 6
 
 void get_grade_count(int marks[],int len, int *f,int *fc,int *fail);
 
 int main()
 {
 	int marks[]={45,10,99,58,75,80};
 	int f,fc,fail;
 	f=fc=fail=0;
 	
 	get_grade_count(marks,LEN,&f,&fc,&fail);
 	
 	assert(f==2);
 	assert(fc==3);
 	assert(fail == 1);
 }
 
 
void get_grade_count(int marks[],int len, int *f,int *fc,int *fail)
{	
	int i ;
	for(i=0;i<LEN;i++)
	{
		if(marks[i]>=80)
			(*f)++;
		else if(marks[i]>=45 && marks[i]<80)
			(*fc)++;
		else 
			(*fail)++;
	}	
}
