#include <stdio.h>
#define MAX 4096
void print (int palindrome);
int main(void){
    printf("Enter a string: ");
    char input[MAX];
    fgets(input, MAX, stdin);
    int i = 0;
    while (input[i] != '\n') { //length of the input
        i++;
    }
    int length = i;
    int b = i - 1;//b is the end character of input
    int c;
    int palindrome = 1;
    if (length % 2 == 0){
        for (c = 0, b = i-1;c < length / 2; c++, b--) {
            if (input[c] != input[b]) {
                palindrome = 0;
            }
        }
    } else {
        for (c = 0, b = i-1;c < (length-1) / 2; c++, b--) {
            if (input[c] != input[b]) {
                palindrome = 0;
            }
        }
    }
    print(palindrome);
    return 0;
}
void print (int palindrome){
    if (palindrome == 1){
        printf("String is a palindrome\n");
    }else{
        printf("String is not a palindrome\n");
    }
}
