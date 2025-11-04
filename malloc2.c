#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int*) malloc(sizeof(int));
    int *b = (int*) malloc(sizeof(int));
    int *c = (int*) malloc(sizeof(int));

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", a, b, c);

    printf("Multiplication = %d\n", (*a) * (*b) * (*c));

    free(a);
    free(b);
    free(c);

    return 0;
}
