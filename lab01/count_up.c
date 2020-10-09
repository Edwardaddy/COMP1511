

#include<stdio,h>

int main(void){
    int a;
    int b;
    printf("Enter lower: ");
    scanf("%d",&a);
    printf("Enter upper: ");
    scanf("%d",&b);
    int c=a+1;
    while(c<b){
    printf("c\n");
    c=c+1;
    }

    return 0;
}
