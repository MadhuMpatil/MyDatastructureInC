#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** split(char *str, char delim, int *count) {
    char **result = NULL;     
    int tokens = 0;          
    char *start = str;       
    char *ptr = str;          
    while (*ptr != '\0') {
        if (*ptr == delim) {
            int len = ptr - start;
            char *token = (char*)malloc(len + 1);
            if (!token) {
                perror("malloc failed");
                exit(EXIT_FAILURE);
            }
            strncpy(token, start, len);
            token[len] = '\0';
            result = (char**)realloc(result, (tokens + 1) * sizeof(char*));
            if (!result) {
                perror("realloc failed");
                exit(EXIT_FAILURE);
            }
            result[tokens++] = token;

            start = ptr + 1; // Move start to next char after delimiter
        }
        ptr++;
    }
    if (ptr != start) {
        int len = ptr - start;
        char *token = (char*)malloc(len + 1);
        if (!token) {
            perror("malloc failed");
            exit(EXIT_FAILURE);
        }
        strncpy(token, start, len);
        token[len] = '\0';
        result = (char**)realloc(result, (tokens + 1) * sizeof(char*));
        if (!result) {
            perror("realloc failed");
            exit(EXIT_FAILURE);
        }
        result[tokens++] = token;
    }
    *count = tokens;
    return result;
}
void freeTokens(char **tokens, int count) {
    for (int i = 0; i < count; i++)
        free(tokens[i]);
    free(tokens);
}
int main() {
    char str[100];
    char delim;
    int count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline
    printf("Enter delimiter character: ");
    scanf(" %c", &delim);
    char **tokens = split(str, delim, &count);
    printf("\nTokens found (%d):\n", count);
    for (int i = 0; i < count; i++) {
        printf("[%d]: %s\n", i + 1, tokens[i]);
    }
    freeTokens(tokens, count);
    return 0;
}
