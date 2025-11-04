#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *arr, *ptr;
    int sum = 0, max;

    // Input size
    printf("Enter number of elements (N): ");
    scanf("%d", &N);

    // Dynamically allocate memory
    arr = (int *)malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input values
    printf("Enter %d integers:\n", N);
    for (ptr = arr; ptr < arr + N; ptr++) {
        scanf("%d", ptr);
    }

    // Initialize max                                                              
