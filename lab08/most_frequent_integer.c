#include<stdio.h>
#define max 10000

int remove_duplicates(int length, int source[length], int destination[length]);

int main(void) {
    int length = 0;
    int source[max]={};
    int destination[max]={};
    int count[max]={};
    int a,b,num;
    while(scanf("%d",&source[length]) != EOF){
        length++;
    }
    a=0;
    int c = remove_duplicates(length,source,destination);
    while(a < c) {
        b=0;
        num=0;
        while(b < length) {
            if (destination[a] == source[b]) {
                num++;
            }
            b++;
        }
        count[a] = num;
        a++;
    }
    int d = 0;
    a = 0;
    while (a < c) {
        if(count[a] > d) {
            d = count[a];
        }
        a++;
    }
    int frq[max]={};
    a=0;
    int n=0;
    while(a < c){
        if(count[a] == d) {
            frq[n] = destination[a];
            n++;
        }
        a++;
    }
    a = 0;
    d = frq[0];
    while(a < n) {
        if (frq[a]>d){
            d = frq[a];
        }
        a++;
    }
    printf("%d\n",d);
    return 0;
}

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

