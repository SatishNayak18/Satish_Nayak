#include"array.h"

void leftshift(Array *, int );
void swap_array(int , int );

/*Display Function*/
void disp(Array *my_arr)
{
	printf("c_size: %d\n",my_arr->c_size);
	printf("t_size: %d\n",my_arr->t_size);
	printf("arr_elements:\n");
	for(int i = 0; i < my_arr->c_size ; i++)
		printf("%d\n",*(my_arr->arr+i));
}

/*Swap function*/
void swap_array(int a, int b)
{
	//using temp variable
	int temp ;
	temp = a;
	a = b;
	b = temp;

	//with using temp
	/*
	a = a + b;
	b = a - b;
	a = a - b;
	*/
}

/*Array Initialization*/
Array * initialize_array(Array *my_arr,int size)
{
	my_arr = (Array *)malloc(sizeof(Array));

	if(NULL == my_arr)
		return NULL;

	my_arr->c_size = 0;
	my_arr->t_size = size;
	my_arr->arr = (int *)malloc(sizeof(int)*size);

	return my_arr;
}

/*Array data insertion*/
int insert_data(Array *my_arr, int data)
{
	if(my_arr->c_size == my_arr->t_size)
		return 0;

	*(my_arr->arr + my_arr->c_size) = data;
	my_arr->c_size++;

	return 1;
}

/*Array Search element*/
int search_element(Array *my_arr,int search)
{
	for(int i = 0; i < my_arr->c_size; i++)
	{
		if(*(my_arr->arr + i) == search)
			return 1;
	}

	return 0;
}

/*Array Max_Min finding*/
int max_min(Array *my_arr, int *max , int *min)
{
	/*Normal logic for max min*/
	/*int a_max,b_min;
	a_max = b_min = *(my_arr->arr);

	for(int  i = 0 ;i < my_arr->c_size; i++)
	{	
		if(a_max < *(my_arr->arr + i))
			a_max = *(my_arr->arr + i);

		if(b_min > *(my_arr->arr + i))
			b_min = *(my_arr->arr + i);
	}
	if(a_max == *max && b_min == *min)
		return 1;
	return 0;*/

	/*Using search function*/
	return(search_element(my_arr, *max) && search_element(my_arr, *min));
}

/*Array Max_Min finding*/
int sort(Array *my_arr)
{
	int temp ,i,j;
	for( i = 0; i < my_arr->c_size ; i++)
	{
		for(j = i+1; j < my_arr->c_size ;j++)
		{
			if(*(my_arr->arr+i) > *(my_arr->arr+j))//assending order
			{
				
				temp = *(my_arr->arr+i);
				*(my_arr->arr+i) = *(my_arr->arr+j);
				*(my_arr->arr+j) = temp;
				
				//swap_array(*(my_arr->arr+i) , *(my_arr->arr+j));
			}
			/* 
			if(*(my_arr->arr+i) < *(my_arr->arr+j)) //for decending order
			{
				temp = *(my_arr->arr+i);
				*(my_arr->arr+i) = *(my_arr->arr+j);
				*(my_arr->arr+j) = temp;
			}
			*/
		}
	}
	return 1;
}

/*Fing the Array Sum*/
int sum_array(Array *my_arr)
{
	int sum = 0 , i;

	for(i=0;i<my_arr->c_size;i++)
		sum += *(my_arr->arr+i);

	return sum;
}

/*Array Intersection*/
Array * intersection(Array *arr_a, Array *arr_b)
{
	/*  a[] = {2,4,6,7,2,6}
        b[] = { 3,4,6,3,9}
        out_c[] = {4, 6} // expected output
    */
    Array *intersect;
    int i ;

    if(arr_a->c_size <= arr_b->c_size)
    	intersect = initialize_array(intersect,arr_a->c_size);
    else
    	intersect = initialize_array(intersect,arr_b->c_size);
   
   	for(i=0; i < arr_a->c_size; i++)
   		if(search_element(arr_b,*(arr_a->arr+i)) && !search_element(intersect,*(arr_a->arr+i)))
   			assert(insert_data(intersect,*(arr_a->arr+i)));
   	
   	return intersect;	
}

/*Array Union*/
Array * union_array(Array *arr_a, Array *arr_b)
{
	assert(merge_array(arr_a,arr_b));
	assert(remove_duplicate(arr_a));
	return arr_a;
}

/*Merge two array and store in 1st array*/
int merge_array(Array *arr_a, Array *arr_b)
{
	int i;

	// Reallocating the first array arr_a
	arr_a->arr = realloc(arr_a->arr,sizeof(int)*(arr_a->c_size + arr_b->c_size));

	arr_a->t_size = arr_a->c_size + arr_b->c_size;

	// inserting the element of arr_b in arr_a
	for (i = 0; i < arr_b->c_size; ++i)
		assert(insert_data(arr_a,*(arr_b->arr+i)));

	return 1;
}

/* Search Element Index*/
int search_element_index(Array *my_arr,int search)
{
	for(int i = 0 ; i< my_arr->c_size;i++)
		if(*(my_arr->arr+i) == search)
			return i;
	return -1;
}


/* Delete Element */
int delete_element(Array *my_arr, int element)
{
	int index;

	index = search_element_index(my_arr,element);

	if(-1 == index)
		return 0;

	leftshift(my_arr,index);

	return 1;
}

/* Left shift*/
void leftshift(Array *my_arr, int index)
{
	int i;

	for (i = index; i < my_arr->c_size-1; ++i)
		*(my_arr->arr + i) = *(my_arr->arr + i + 1);

	my_arr->c_size--;
}

/*Removing duplicate elements*/
int remove_duplicate(Array *my_arr)
{
	int i,j,index;
	for (i = 0; i < my_arr->c_size; ++i)
	{
		for(j= i+1 ;j< my_arr->c_size;)
		{
			if(*(my_arr->arr+i) == *(my_arr->arr+j))
				assert(delete_element(my_arr,*(my_arr->arr+j)));
			else
				j++;
		}	
	}
	return 1;
} 

/*Checking if the array is a palindrome*/
int is_palindrome(Array *my_arr)
{
	int i ,j;
	for(i = 0 , j = my_arr->c_size-1 ; i<my_arr->c_size; i++,j--)
	{
		if(*(my_arr->arr+i) != *(my_arr->arr+j))
			return 0;
	}
	return 1;
}

/*Deallocation of memory*/
Array * deallocation(Array *my_arr)
{
	free(my_arr->arr);
	free(my_arr);

	return NULL;
}

/*Splitting an Array*/
Array * split(Array *left, int index)
{
	Array *right;
	int i;

	if(index >= left->c_size)
		return NULL;

	if(0 == index)
	{
		right = initialize_array(right,left->c_size);

		for(i = 0; i< left->c_size; i++)
			assert(insert_data(right,*(left->arr+i)));

		left->c_size = 0;

		return right;
	}

	right = initialize_array(right, left->c_size - index);

	for( i = index;i< left->c_size;i++)
		assert(insert_data(right, *(left->arr+i)));

	left->c_size = index;

	return right;
}

/*Reversing an Array*/
int reverse_array(Array *my_arr)
{
	
	int i ,j ,temp;
	disp(my_arr);
	
	for(i = 0 , j = my_arr->c_size-1 ; i<my_arr->c_size; i++,j--)
	{
		//swap_array(*(my_arr->arr+i),*(my_arr->arr+j));

		temp = *(my_arr->arr+i);
		*(my_arr->arr+i) = *(my_arr->arr+j);
		*(my_arr->arr+j) = temp;

	}
	disp(my_arr);
	return 1;
}

/*Replacing an element in the array*/
int replace_element(Array *my_arr, int olddata, int newdata)
{
	int index;
	if(search_element(my_arr,olddata))
	{
		index = search_element_index(my_arr,olddata);
		*(my_arr->arr+index) = newdata;
		return 1;
	}
	return 0;
} 

/*Finding  difference between sum of odd numbers & even numbers*/
int difference_sum_odd_even_numbers(Array *my_arr)
{
	int odd_sum = 0, even_sum = 0, i, odd_diff = 0, even_diff = 0;

	for (i = 0; i < my_arr->c_size; ++i)
	{
		if (*(my_arr->arr + i) % 2 == 0)
			even_sum += *(my_arr->arr+i);
		else
			odd_sum += *(my_arr->arr+i);
	}

	return (even_sum - odd_sum);
}


