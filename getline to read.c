#include <stdio.h>
#include <stdlib.h>
char* getLine() {
    char *str = NULL;      
    int ch;                
    size_t size = 0;       
    size_t len = 0;       
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (len + 1 >= size) {
            size_t new_size = (size == 0) ? 16 : size * 2; 
            char *new_str = realloc(str, new_size);
            if (!new_str) {
                free(str);
                fprintf(stderr, "Memory allocation failed\n");
                return NULL;
            }
            str = new_str;
            size = new_size;
        }
        str[len++] = (char)ch;
    }
    if (str == NULL) {
        str = malloc(1);
        if (!str) {
            fprintf(stderr, "Memory allocation failed\n");
            return NULL;
        }
    }
    str[len] = '\0';
    return str;
}
int main() {
    printf("Enter a line: ");
    char *line = getLine();
    if (line) {
        printf("You entered: %s\n", line);
        free(line);
    }
    return 0;
}
