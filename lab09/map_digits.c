#include <stdio.h>
#define max 10
int edward(int ch, char cooljay[max]);

int main(int argc, char *argv[]) {
    int i = 0;
    char cooljay[max];
    while ( argc > 1 && i < 10) {
        cooljay[i] = argv[1][i];
        i++;
    }
    int ch = getchar();
    while (ch != EOF) {
        int newch = edward(ch,cooljay);
        putchar(newch);
        ch = getchar();
    }
    
    return 0;
}

            
int edward (int ch, char cooljay[max]) {
    int newch;
    if (ch >= '0' && ch <= '9') {
        newch = cooljay[ch - '0'];
        return newch;
    } else {
        return ch;
    }


}

