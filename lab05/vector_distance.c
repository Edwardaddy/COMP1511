

#include<stdio.h>
#include<math.h>

double ed(int vlength, int array1[vlength], int array2[vlength]);

int main (void){
    int vlength;
    printf("Enter vector length: ");
    scanf("%d",&vlength);
    
    int array1[vlength];
    int a=0;
    printf("Enter vector 1: ");
    while(a < vlength){
        scanf("%d",&array1[a]);
        a=a+1;
    }
    
    int array2[vlength];
    int b=0;
    printf("Enter vector 2: ");
    while (b < vlength){
        scanf("%d",&array2[b]);
        b= b + 1;
    }
    
    
    printf("Euclidean distance = %lf\n",ed(vlength, array1,array2));

    return 0;
}

double ed(int vlength, int array1[vlength], int array2[vlength]){
    int c=0;
    double d;
    double e;
    double total=0;
    double f;
    while(c<vlength){
    d=0;
    e=0;
    
    d= array1[c] - array2[c];
    e=d * d;
    total = total + e;
    c++;
    }
    f=sqrt(total);
    return f;
}
