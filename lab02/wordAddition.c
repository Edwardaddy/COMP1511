//Edward

#include<stdio.h>

int main(void){
    
    int a;
    int b;
    int c;
    
    printf("Please enter two integers: ");
    scanf("%d %d",&a,&b);
    
    c=a+b;
    if((-10<=a&&a<=10)||(-10<=b&&b<=10)||(-10<=c&&c<=10)){
        if(a<0 && a>=-10){
            printf("negative ");
        }
    if(a==0){
        printf("zero");
    }else if(a==1 ||a==-1){
        printf("one ");    
    }else if(a==2 ||a==-2){
        printf("two ");
    }else if(a==3 ||a==-3){
        printf("three ");    
    }else if(a==4 ||a==-4){
        printf("four ");
    }else if(a==5 ||a==-5){
        printf("five ");    
    }else if(a==6 ||a==-6){
        printf("six ");
    }else if(a==7 ||a==-7){
        printf("seven ");    
    }else if(a==8 ||a==-8){
        printf("eight ");
    }else if(a==9 ||a==-9){
        printf("nine ");
    }else if(a==-10||a==10){
    printf("ten");
    }else{
        printf("%d",a);
    }
    printf(" + ");
    
    if(b<0 && b>=-10){
        printf("negative ");
    }
    
    if(b==0){
        printf("zero ");
    }else if(b==1 ||b==-1){
        printf("one ");    
    }else if(b==2 ||b==-2){
        printf("two ");
    }else if(b==3 ||b==-3){
        printf("three ");    
    }else if(b==4 ||b==-4){
        printf("four ");
    }else if(b==5 ||b==-5){
        printf("five ");    
    }else if(b==6 ||b==-6){
        printf("six ");
    }else if(b==7 ||b==-7){
        printf("seven ");    
    }else if(b==8 ||b==-8){
        printf("eight ");
    }else if(b==9 ||b==-9){
        printf("nine ");
    }else if(b==-10||b==10){
    printf("ten");
    }else 
        printf("%d",b);
    
    printf("=");
    
    if(c<0 && c>=-10){
        printf("negative ");
    }
    
    if(c==0){
        printf("zero ");
    }else if(c==1 ||c==-1){
        printf("one ");    
    }else if(c==2 ||c==-2){
        printf("two ");
    }else if(c==3 ||c==-3){
        printf("three ");    
    }else if(c==4 ||c==-4){
        printf("four ");
    }else if(c==5 ||c==-5){
        printf("five ");    
    }else if(c==6 ||c==-6){
        printf("six ");
    }else if(c==7 ||c==-7){
        printf("seven ");    
    }else if(c==8 ||c==-8){
        printf("eight ");
    }else if(c==9 ||c==-9){
        printf("nine ");
    }else if(c==-10||c==10){
        printf("ten");
    }else{
        printf("%d",c);
    }
    
    printf("\n");
    
}   else {
    printf("%d + %d = %d",a,b,c);
    }
    return 0;
}
       
