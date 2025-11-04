#include <stdio.h>
#include <stdlib.h>
char* my_strdup(char *src) {
char *dest, *p, *q;
int len = 0;
for (p = src; *p != '\0'; p++) {
len++;
}
dest = (char*)malloc((len + 1) * sizeof(char));
if (dest == NULL) {
printf("Memory allocation failed!\n");
return NULL;
}
q = dest;
for (p = src; *p != '\0'; p++, q++) {
*q = *p;
}
*q = '\0';
return dest;
}
int main() {
char str[100];
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);

for (char *p = str; *p; p++) {
if (*p == '\n') {
*p = '\0';
break;
}
}
char *copy = my_strdup(str);
if (copy != NULL) {
printf("Copied string: %s\n", copy);
free(copy); 
}
return 0;
}
