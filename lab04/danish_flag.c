// To get top left number of #: x = 3*size - 1
// To get the top right number of #: y = 2*x + 1
// To get the number of rows r = 2*size - 1
#include<stdio.h>

int main(void){
    int s;
    printf("Enter the flag size: ");
    scanf("%d",&s);
    int x = 3*s - 1;
    int y = 2*x + 1;
    int r = 2*s - 1; 
    int cr = 1;  //current row
    int cc = 1;   //cuuent column
    
    
    while(cr<=4*s){
        cc=1;
        while(cc<=9*s){
            if(cr==2*s ||cr==2*s+1 || cc==3*s||cc==3*s+1){
                printf(" ");
            }
            else{
                printf("#");
            }
            
            cc++;
            }
            printf("\n");
            cr++;
        }
    return 0;
}
