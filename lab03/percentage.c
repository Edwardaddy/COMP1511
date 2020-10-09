#include<stdio.h>

int main(void){
    int a;
    double b;
    double c;
    
    printf("Enter the total number of marks in the exam: ");
    scanf("%d",&a);
    printf("Enter the number of marks the student was awarded: ");
    scanf("%lf",&b);
    
    c=b/a*100.0;
    
    printf("The student scored %.0lf%% in this exam.\n",c);

    return 0;
}
