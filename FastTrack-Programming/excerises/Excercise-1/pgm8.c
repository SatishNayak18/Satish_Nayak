
#include <stdio.h>
int main(){
    int a;
    float b;
    double c;
    char D;
    printf("Size of int: %ld bytes\n",sizeof(a));
    printf("Size of float: %ld bytes\n",sizeof(b));
    printf("Size of double: %ld bytes\n",sizeof(c));
    printf("Size of char: %zu byte\n",sizeof(D));//%zu  In “%zu” format, z is a length modifier and u stand for unsigned type
    return 0;
}
