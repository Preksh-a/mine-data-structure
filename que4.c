#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL, size = 0, cap = 2, x;
    arr = malloc(cap * sizeof(int));
    while(scanf("%d", &x) == 1) {
        if(size == cap) {
            cap *= 2;
            arr = realloc(arr, cap * sizeof(int));
        }
        arr[size++] = x;
    }
    printf("Elements:\n");
    for(int i=0;i<size;i++) printf("%d ", arr[i]);
    free(arr);
}
