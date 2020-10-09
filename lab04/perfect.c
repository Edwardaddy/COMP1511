#include<stdio.h>

int main(void){
    int a=1;
    int b;
    int sum=0;
    printf("Enter number: ");
    scanf("%d",&b);
    printf("The factors of %d are:\n",b);
    
    // IN general a % b != b % a
    while(a<=b){
        if(b % a == 0){
            printf("%d\n",a);
            sum=sum+a;  
        }
        a++;
    }
    printf("Sum of factors = %d\n",sum);
    if(sum%b==0){
        printf("%d is a perfect number\n",b);
    }else {
        printf("%d is not a perfect number\n",b);
    }
    return 0;
}
