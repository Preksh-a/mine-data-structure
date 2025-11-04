#include <stdio.h>
#include <stdlib.h>

char* getLine() {
    char *s = NULL; int c, len = 0;
    while((c = getchar()) != '\n' && c != EOF) {
        s = realloc(s, len + 2);
        s[len++] = c;
    }
    s[len] = '\0';
    return s;
}

int main() {
    printf("Enter line: ");
    char *line = getLine();
    printf("You entered: %s\n", line);
    free(line);
}
