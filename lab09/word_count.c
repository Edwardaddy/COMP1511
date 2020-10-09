#include <stdio.h>

int main(void) {
    int ch = getchar();
    int n_ch = 0;
    int n_word = 0;
    int n_line = 0;
    int last = ch;
    while (ch != EOF) {
        n_ch++;
        if (ch == ' ') {
            if (last != ' ' && last != '\n') {
                n_word++;
            }
        } else if (ch == '\n') {
            if (last != ' ' && last != '\n') {
                n_word++;
            }
            n_line++;
        }
        last = ch;
        ch = getchar();
        
    }
    if (ch == EOF && last != '\n') {
        n_word++;
    }
    printf("%d lines %d words %d characters\n", n_line, n_word, n_ch);
    return 0;
}

