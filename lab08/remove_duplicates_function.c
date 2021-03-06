//Edward
#include <stdio.h>
#include <stdlib.h>

// return the number of even values in an array.
int remove_duplicates(int length, int source[length], int destination[length]) {
    int i;
    int j;
    int number = 0;
    int g = 0;
    for (i=0;i < length;i++) {
        g = 0;
        for (j=0; j < length ; j++){
            if (destination[j] == source[i]){
                g = 1;//1 means that there exist a number that equals to source[i]
                j = length;
            }
        }
        if (g == 0) {
            destination[number] = source[i];
            number++;
        }
        
    }
    return number;
}

// This is a simple main function which could be used
// to test your count_even function.
// It will not be marked.
// Only your count_even function will be marked.

# define TEST_ARRAY_SIZE 8

int main(void) {
    int test_array[TEST_ARRAY_SIZE] = {16, 7, 8, 12, 13, 19, 21, 12};
    int destination[TEST_ARRAY_SIZE] = {};
    
    int result = remove_duplicates(TEST_ARRAY_SIZE, test_array,destination);
    
    printf("%d\n", result);
    return 0;
}

