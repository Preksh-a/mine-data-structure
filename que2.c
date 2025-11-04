#include <stdio.h>
#include <stdlib.h>

char* my_strdup(char *src) {
    char *dup, *p, *q;
    int len = 0;

    // Find length of src
    for (p = src; *p != '\0'; p++)
        len++;

    // Allocate memory for duplicate (including null terminator)
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;

    // Copy characters using pointer arithmetic
    for (p = src, q = dup; *p != '\0'; p++, q++) {
        *q = *p;
    }
    *q = '\0'; // Add null terminator

    return dup;
}
