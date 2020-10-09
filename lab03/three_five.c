#include<stdio.h>

int main(void){
    int a;
    int b=1;
    int c;
    printf("Enter number: ");
    scanf("%d",&a);
    
    while(b<a){
        if(b%3==0||b%5==0){
        printf("%d\n",b);
        }
        b=b+1;
    }
    

    return 0;
}
