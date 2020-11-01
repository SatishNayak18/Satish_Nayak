/*Write function to compare whether the elements in two arrays are same.*/


#include<assert.h>
#include<stdlib.h>


int areEqual(int arr1[], int arr2[],int n ,int m);

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main() 
{ 
	int arr1[] = { 3, 5, 2, 5}; 
	int arr2[] = { 2, 3, 5, 5, 2 }; 
	int n = sizeof(arr1) / sizeof(int); 
	int m = sizeof(arr2) / sizeof(int);
	 
	assert(areEqual(arr1, arr2,n,m) == 1); 
	
	return 0; 
} 


int areEqual(int arr1[], int arr2[],int n ,int m)
{	
	if(n!=m)
	  return 0;
	qsort(arr1 , n, sizeof(int), cmpfunc);
	qsort(arr2 , m, sizeof(int), cmpfunc);
	 
	 
	for (int i = 0; i < n; i++) 
            if (arr1[i] != arr2[i]) 
                return 0; 
  
        // If all elements were same. 
        return 1; 
} 


