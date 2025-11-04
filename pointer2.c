#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int *ptr = arr; // pointer to first element

    for(int i = 0; i < 5; i++) {
        sum += *(ptr + i); // pointer arithmetic
    }

    printf("Sum of array elements = %d\n", sum);
    return 0;
}
