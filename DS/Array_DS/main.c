#include"array.h"

int main()
{
	Array *test_one = NULL, *test_two;
	Array *a, *b, *out_c,*c_out , *c, *d;
	int max = 60  ,min = 10 ;

    /* testing Initialization function */
	test_one = initialize_array( test_one, 5);
	test_two = initialize_array( test_two, 7);

	assert(test_one->c_size == test_two->c_size  && test_one->c_size== 0);
	assert(test_one->t_size == 5);
	assert(test_two->t_size == 7);
	assert(test_one->arr != NULL);

	/* testing  Insert function*/

	assert(insert_data(test_one,10) == 1);
    assert(insert_data(test_one,50));
    assert(insert_data(test_one,60));
    assert(insert_data(test_one,30));

    assert(*(test_one->arr + 3) == 30);
    assert(*(test_one->arr) == 10);
    assert(*(test_one->arr + test_one->c_size - 1) == 30);

    //assert(test_one->c_size == 4);


    //assert(insert_data(test_one,90));

    //disp(test_one);

    //Test Search function

    assert(search_element(test_one,10));
    assert(search_element(test_one,50));
    assert(search_element(test_one,30));

    assert(!search_element(test_one,80)); // False condition
    //disp(test_one);

     //Test max_min function
    assert(max_min(test_one , &max, &min));

    //Test sort function
    assert(sort(test_one));
    //disp(test_one);

  	//Test sum function
    assert(sum_array(test_one)==150);

    // Testing intersection
    /*  a[] = {2,4,6,7,2,6}
        b[] = { 3,4,6,3,9}
        out_c[] = {4, 6} // expected output
    */

    a = initialize_array(a, 6);
    b = initialize_array(b, 5);

    assert(insert_data(a,2));//{2,4,6,7,2,6}
    assert(insert_data(a,4));
    assert(insert_data(a,6));
    assert(insert_data(a,7));
    assert(insert_data(a,2));
    assert(insert_data(a,6));

    assert(insert_data(b, 3)); //{ 3,4,6,3,9}
    assert(insert_data(b, 4));
    assert(insert_data(b, 6));
    assert(insert_data(b, 3));
    assert(insert_data(b, 9));

    out_c = intersection(a, b); //{4, 6}

    //assert(out_c->c_size == 2);
    /*assert(search_element(out_c, 4));
     assert(search_element(out_c, 6));*/

    // Testing union
    
    /*out_c = union_array(a ,b);*/


    //Testing Merge
    /*assert(merge_array(a,b));
    assert(a->c_size ==11);
    assert(search_element(a,9));*/

 	//Testing search element index
    /*assert(search_element_index(a,9)==10);*/

    //Testing delete element
    /*assert(delete_element(a,9));
      assert(a->c_size == 10);*/

    //Testing remove duplicate function
    /*assert(remove_duplicate(a));*/

    //Testing is palindrome function
    c = initialize_array(c, 7);

    assert(insert_data(c,2));//{2,4,6,7,6,4,2}
    assert(insert_data(c,4));
    assert(insert_data(c,6));
    assert(insert_data(c,7));
    assert(insert_data(c,6));
    assert(insert_data(c,4));
    assert(insert_data(c,2));

    assert(is_palindrome(c));

    //Testing for memory deallocation
    assert(deallocation(test_one)==NULL);
    //disp();

    // Testing splitting an Array
    d = split(c,4);
    assert(c->c_size==4);
    assert(d->c_size==3);

 	//Testing reversing an Array

 	assert(reverse_array(d));
 	//disp(d);

 	//Testing replacing an Array element
 	assert(replace_element( c, 7 ,9));
 

 	//Testing difference and sum of odd and even numbers
 	assert(difference_sum_odd_even_numbers(c) == 3);

	return 0;
}
