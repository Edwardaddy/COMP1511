
// Assignment 1 19T1 COMP1511 Coco
//
// This program was written by Edward (z5223873)
// on 26/3/2019
//

#include <stdio.h>
#include <assert.h>


#define ACTION_PLAYER_NAME    0
#define ACTION_DISCARD        1
#define ACTION_PLAY_CARD      2

#define N_CARDS              40
#define N_CARDS_INITIAL_HAND 10
#define N_PLAYERS             4
#define N_CARDS_DISCARDED     3

#define CARD_MIN             10
#define CARD_MAX             49


// IF YOU NEED MORE #defines ADD THEM HERE


void print_player_name(void);
void choose_discards(void);
void choose_card_to_play(void);
void bubble_sort(int a[]);
int check_prime(int x);



// ADD PROTOTYPES FOR YOUR FUNCTIONS HERE


// You should not need to change this main function

int main(void) {
    
    int which_action = 0;
    scanf("%d", &which_action);
    if (which_action == ACTION_PLAYER_NAME) {
        print_player_name();
    } else if (which_action == ACTION_DISCARD) {
        choose_discards();
    } else if (which_action == ACTION_PLAY_CARD) {
        choose_card_to_play();
    }
    
    return 0;
}

void print_player_name(void) {
    
    // CHANGE THIS PRINTF TO YOUR DESIRED PLAYER NAME
    
    printf("Father");
    
}

void choose_discards() {
    
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY USING SCANF
    // THEN ADD YOUR CODE HERE TO CHOOSE AND PRINT THE CARDS YOU WISH TO DISCARD
    
    // NOTE: THE PROVIDED CODE PROBABLY DISCARDS CARDS NOT IN YOUR HAND
    // WHICH IS NOT LEGAL AND WILL RECEIVE PENALTY POINTS
    // YOU MUST CHANGE IT TO DISCARD CARDS FROM YOUR HAND.
    int b;
    int a[N_CARDS_INITIAL_HAND];
    for(b = 0; b < N_CARDS_INITIAL_HAND; b++){ //scan the cards
        scanf("%d",&a[b]);
    }
    bubble_sort(a); //arrange the cards
    
    
    printf("%d %d %d\n",a[7], a[8], a[9]);
    
}


void choose_card_to_play(void) {
    
    // ADD CODE TO READ THE FIRST THREE NUMBERS WHICH ARE:
    // NUMBER OF CARDS IN YOUR HAND,  NUMBER OF CARDS PLAYED THIS ROUND, TABLE POSITION
    int array1[3]; // array1 is the array which store NUMBER OF CARDS IN YOUR HAND,  NUMBER OF CARDS PLAYED THIS ROUND, TABLE POSITION
    int i;
    for(i = 0; i < 3; i++){
        scanf("%d", &array1[i]);
    }
    // array1[0]=NUMBER OF CARDS IN YOUR HAND
    // array1[1]=NUMBER OF CARDS PLAYED THIS ROUND
    // array1[2]=TABLE POSITION
    
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY
    // YOU WILL NEED TO USE A WHILE LOOP AND SCANF
    int cards_in_hand[array1[0]];
    int b;
    for(b = 0; b < (array1[0]); b++){ //scan the cards
        scanf("%d",&cards_in_hand[b]);
    }
    int number_of_cards_played = array1[1];
    
    // ADD CODE TO READ THE CARDS PREVIOUSLY PLAYED THIS ROUND INTO AN ARRAY
    // YOU WILL NEED TO USE A WHILE LOOP AND SCANF
    int cards_be_played[4]={ };
    
    int q = 0;
        
    while(q < number_of_cards_played){
        scanf("%d", &cards_be_played[q]);
        q++;
    }
        //int v = cards_be_played[0];
    
    // ADD CODE TO READ THE CARDS PLAYED IN THE HISTORY OF THE GAME INTO AN ARRAY
    // YOU WILL NEED TO USE A WHILE LOOP AND SCANF
    
    if(10 - array1[0] != 0){
        int history_array[4 *( 10 - array1[0])];
        for(int s = 0; s <4 *( 10 - array1[0]); s++){
            scanf("%d",&history_array[s]);
        }
    }
    
    int discard[3];
    for (int g = 0; g < 3; g++){
        scanf("%d", &discard[g]);
    }
    
    int discard_received[3];
    for (int h = 0; h < 3; h++){
        scanf("%d", &discard_received[h]);
    }
    // THEN REPLACE THIS PRINTF WITH CODE TO CHOOSE AND PRINT THE CARD YOU WISH TO PLAY
    
    // int a new array and put the primes in the front
    
    int new_array[array1[0]];
    int counter = 0;
    for ( int k = 0; k < array1[0]; k++){
        int x = cards_in_hand[k];
        if (check_prime(x) == 1){
            new_array[counter] =  cards_in_hand[k];
            counter++;
            
        }
    }
    
    while (counter < array1[0] ){
        new_array[counter] =  cards_in_hand[counter];
        counter++; // put the non-prime cards in new_array
    }
    
    //choose card to play
    // array1[0]=NUMBER OF CARDS IN YOUR HAND
    // array1[1]=NUMBER OF CARDS PLAYED THIS ROUND
    // array1[2]=TABLE POSITION
    int x = cards_be_played[0];
    if(array1[1] == 0){
        printf("%d",cards_in_hand[array1[0] / 2]);
    }
    if( array1[1] != 0){
        
        
        if (check_prime(x) == 1){
            
            printf("%d", new_array[0]);
        }
        if (check_prime(x) == 0){
            printf("%d", new_array[array1[0]-1]);
        }
        
        
    }
    
    
}

void bubble_sort(int a[]){
    // to arrange the initial cards in hand from the smallest to the biggest.
    int i, j, temp;
    for (j = 0; j < N_CARDS_INITIAL_HAND - 1; j++){
        for ( i = 0; i < N_CARDS_INITIAL_HAND - 1 - j; i++){
            if ( a[i] > a[i+1]){
                temp = a[i];
                a[i] = a [i+1];
                a[i+1] = temp;
            }
        }
    }
}

// ADD YOUR FUNCTIONS HERE

int check_prime(int x){
    x = cards_be_played[0];
    for( int z = 2; z < x; z++){
        if(x % z == 0 ){
            return 0;
        }
    }
    return 1;
}



