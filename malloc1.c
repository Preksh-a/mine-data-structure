#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*) malloc(5 * sizeof(int));  
    arr[0] = 10; arr[1] = 20;             
    printf("%d %d", arr[0], arr[1]);           
    free(arr);                                 
    return 0;
}
