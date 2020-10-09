
#include<stdio.h>
#include<math.h>

int main (void){
    int vlength=0;
    printf("Enter vector length: ");
    scanf("%d",&vlength);
    
    int array1[vlength];
    int a=0;
    printf("Enter vector: ");
    while(a < vlength){
        scanf("%d",&array1[a]);
        a=a+1;
    }
    
    int array2[vlength];
    int b=0;
    printf("Enter permutation: ");
    while (b < vlength){
        scanf("%d",&array2[b]);
        if (array2[b]>=vlength || array2[b]<0){
            printf("Invalid permutation\n");
            return 1;
        }
        b= b + 1;
        
    }
    int c= 0;
    while(c<vlength){
        printf("%d ",array1[array2[c]]);
        c++;
    }
    printf("\n");
    
    //array1[array2[i]]
    

    return 0;
}
