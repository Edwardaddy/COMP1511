#include<stdio.h>

int main(void){
    
    int a;
    int b;
    int c;
    
    
    printf("Enter integer: ");
    scanf("%d",&a);
    
    printf("Enter integer: ");
    scanf("%d",&b);
    
    printf("Enter integer: ");
    scanf("%d",&c);
    
    if(a<=b&&b<=c){
        printf("The integers in order are: %d %d %d",a,b,c);
    }else if(a<=c&&c<=b){
        printf("The integers in order are: %d %d %d",a,c,b);
    }else if(b<=a&&a<=c){
        printf("The integers in order are: %d %d %d",b,a,c);
    }else if(b<=c&&c<=a){
        printf("The integers in order are: %d %d %d",b,c,a);
    }else if(c<=b&&b<=a){
        printf("The integers in order are: %d %d %d",c,b,a);
    }else if(c<=a&&a<=b){
        printf("The integers in order are: %d %d %d",c,a,b);
    }
    printf("\n");

    return 0;
}
