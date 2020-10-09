#include<stdio.h>
int main(void){
    int sum,a;
    sum=0;
    a=1;
    while(a<=100){
        printf("a=%d ",a);
        sum=sum+a;
        printf("sum=%d\n",sum);
        a=a+1;
    }
    return 0;
}
