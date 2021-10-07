#include "lab3.h"

int main () {
    int arr[] = {1,2,3,4,5};

    int *p = arr;

    int *q = &arr[0];
    int *s = ++p;

    ptrdiff_t dif = q - s ;
    
    std::cout << dif; 

    return 0;
}