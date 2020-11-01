#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

struct _array_
{
	int *arr;
	int c_size,t_size;
};

typedef struct _array_ Array;

void disp(Array *);
void swap(int a, int b);
Array * initialize_array(Array *,int size);
int insert_data(Array *, int data);
int search_element(Array *,int search);
int max_min(Array *, int * , int *);
int sort(Array *);
int sum_array(Array *); 
Array * intersection(Array *, Array *);
Array * union_array(Array *, Array *);
int merge_array(Array *, Array *); 
int search_element_index(Array *,int search);
int delete_element(Array *, int);
int remove_duplicate(Array *); 
int is_palindrome(Array *); 
Array * deallocation(Array *); 
Array * split(Array *, int); 
int reverse_array(Array *);
int replace_element(Array *, int, int);
int difference_sum_odd_even_numbers(Array *);
