#include<stdio.h>

int main(void){
    int n1;
    int n2;
    int sum;
    printf("Please enter two integers:");
    scanf("%d %d",&n1,&n2);
    
    sum = n1 + n2;
    
    printf("%d + %d = %d\n",n1,n2,sum);
    return 0;
}
