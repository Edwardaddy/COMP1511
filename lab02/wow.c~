//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000
#define NUM_GRUNTS 5
struct fighter {
    char name[20];
    int strength;
    int health;
};
struct warband{
    char name[20];
    struct fighter grunts[NUM_GRUNTS];
};

int attack(struct fighter *attacker, struct fighter *target);

int main(int argc, char *argv[]) {
    if(argc > 1){
        //if we received a command line argument.
        //use that as our random seed
        srand(atoi(argv[1]));
    }
    
    struct fighter defender;
    strcpy(defender.name, "Coolest Edward");
    defender.strength = 100;
    defender.health = 100;
    
    struct warband orcs;
    strcpy(orcs.name, "Stupid Sam");
    int i = 0;
    while(i < NUM_GRUNTS){
        strcpy(orcs.grunts[i].name, "Grunt");
        orcs.grunts[i].strength = 3;
        orcs.grunts[i].health = (rand() % 6) + 1;
        i++;
    }
    int front = 0;
    while (defender.health > 0 && front < NUM_GRUNTS) {
        if(attack(&defender, &orcs.grunts[front])) {
            // Orc didn't die, allow it to counterattack
            attack(&orcs.grunts[front], &defender);
        } else {
            // Orc at the front has died, move on to the next
            front++;
        }
    }

    // Fight through the grunts, one at a time
    // Who won?
    if(defender.health > 0) {
        printf("%s is Victorious!\n", defender.name);
    } else {
        printf("%s have overrun the village!\n", orcs.name);
    }
    return 0;
}
int attack(struct fighter *attacker, struct fighter *target){
    printf("%s attacks %s for %d damage.\n", attacker->name, attacker->name, attacker->strength);
    if(target->health <= 0){
        printf("%s has died.\n",target->name);
    }else{
        return 1;
    }
}

