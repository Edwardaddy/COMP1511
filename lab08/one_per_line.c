// Edward

#include <stdio.h>
#define MAX 4096

void split (char line[MAX]);
int main(void) {
    char line[MAX];
    int i;
    printf("Enter a string: ");
    fgets(line, MAX, stdin);
    split(line);
    return 0;
}

void split (char line[MAX]) {
    int i;
    for (i = 0; line[i] != '\n';i++) {
    printf("%c\n",line[i]);
    }
}
