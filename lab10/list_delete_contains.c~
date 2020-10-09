// Assignment 2 19T1 COMP1511: Pokedex
// pokedex.c
//
// This program was written by Edward (z5555555)
// on INSERT-DATE-HERE
//
// Version 1.0.0: Assignment released.
// Version 1.0.1: Minor clarifications about `struct pokenode`.
// Version 1.1.0: Moved destroy_pokedex function to correct location.
// Version 1.1.1: Renamed "pokemon_id" to "id" in change_current_pokemon.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Add any extra #includes your code needs here.
//
// But note you are not permitted to use functions from string.h
// so do not #include <string.h>

#include "pokedex.h"

// Add your own #defines here.


// Note you are not permitted to use arrays in struct pokedex,
// you must use a linked list.
//
// You are also not permitted to use arrays in any of the functions
// below.
//
// The only exception is that char arrays are permitted for
// search_pokemon and functions it may call, as well as the string
// returned by pokemon_name (from pokemon.h).
//
// You will need to add fields to struct pokedex.
// You may change or delete the head field.

struct pokedex {
    struct pokenode *head;
};


// You don't have to use the provided struct pokenode, you are free to
// make your own struct instead.
// If you use the provided struct pokenode, you will need to add fields
// to it to store other information.

struct pokenode {
    struct pokenode *next;
    Pokemon         pokemon;
    int current;
    int found;
};

// Add any other structs you define here.


// Add prototypes for any extra functions you create here.
static struct pokenode *new_pokenode(Pokemon pokemon);

static void add_to_end(Pokedex pokedex, struct pokenode *node);

static void print(struct pokenode *curr);
// You need to implement the following 20 functions.
// In other words, replace the lines calling fprintf & exit with your code.
// You can find descriptions of what each function should do in pokedex.h


Pokedex new_pokedex(void) {
    Pokedex new_pokedex = malloc(sizeof (struct pokedex));
    assert(new_pokedex != NULL);
    // add your own code here
    new_pokedex->head = NULL;
    return new_pokedex;
}

////////////////////////////////////////////////////////////////////////
//                         Stage 1 Functions                          //
////////////////////////////////////////////////////////////////////////

void add_pokemon(Pokedex pokedex, Pokemon pokemon) {
    struct pokenode *node = new_pokenode(pokemon);
    add_to_end(pokedex,node);
}

void detail_pokemon(Pokedex pokedex) {
    struct pokenode *curr = pokedex->head;
    if (curr == NULL) {
        printf("There's no current pokemon");
        exit(1);
    }
    while (curr != NULL) {
        if (curr->current == 1) {
            break;
        }
        curr = curr->next;
    }
    print(curr);
}

Pokemon get_current_pokemon(Pokedex pokedex) {
    Pokemon c = NULL;
    struct pokenode *curr = pokedex->head;
    while (curr != NULL) {
        if (curr->current == 1) {
            break;
        }
        curr = curr->next;
    }
    c = curr->pokemon;
    return c;
}

void find_current_pokemon(Pokedex pokedex) {
    struct pokenode *curr = pokedex->head;
    while (curr != NULL) {
        if (curr->current == 1) {
            curr->found = 1;
            break;
        }
        curr = curr->next;
    }
}

void print_pokemon(Pokedex pokedex) {
    struct pokenode *curr = pokedex->head;
    while (curr != NULL) {
        if (curr->current == 1 && curr->found == 1) {
            printf("--> #%d %s",pokemon_id(curr->pokemon),pokemon_name(curr->pokemon));
        } else if (curr->current == 1 && curr->found == 0) {
            printf("--> #%d",pokemon_id(curr->pokemon));
            for(char *c = pokemon_name(curr->pokemon); *c != '\0'; c++) {
                printf("*");
            }
            printf("\n");
        } else if (curr->current == 0 && curr->found == 1) {
            printf("    #%d %s",pokemon_id(curr->pokemon),pokemon_name(curr->pokemon));
        } else if (curr->current == 0 && curr->found == 0) {
            printf("    #%d",pokemon_id(curr->pokemon));
            for(char *c = pokemon_name(curr->pokemon); *c != '\0'; c++) {
                printf("*");
            }
            printf("\n");
        }
        
    }
    
}

////////////////////////////////////////////////////////////////////////
//                         Stage 2 Functions                          //
////////////////////////////////////////////////////////////////////////

void next_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the next_pokemon function in pokedex.c\n");
    exit(1);
}

void prev_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the prev_pokemon function in pokedex.c\n");
    exit(1);
}

void change_current_pokemon(Pokedex pokedex, int id) {
    fprintf(stderr, "exiting because you have not implemented the change_current_pokemon function in pokedex.c\n");
    exit(1);
}

void remove_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the remove_pokemon function in pokedex.c\n");
    exit(1);
}

void destroy_pokedex(Pokedex pokedex) {
    struct pokenode *curr = pokedex->head;
    if (curr == NULL) {
        free(curr);
    }
    while (curr != NULL) {
        struct pokenode *tem = curr->next;
        free(curr);
        curr = tem;
    }
    free(pokedex);
}

////////////////////////////////////////////////////////////////////////
//                         Stage 3 Functions                          //
////////////////////////////////////////////////////////////////////////

void go_exploring(Pokedex pokedex, int seed, int factor, int how_many) {
    fprintf(stderr, "exiting because you have not implemented the go_exploring function in pokedex.c\n");
    exit(1);
}

int count_found_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the count_found_pokemon function in pokedex.c\n");
    exit(1);
}

int count_total_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the count_total_pokemon function in pokedex.c\n");
    exit(1);
}

////////////////////////////////////////////////////////////////////////
//                         Stage 4 Functions                          //
////////////////////////////////////////////////////////////////////////

void add_pokemon_evolution(Pokedex pokedex, int from_id, int to_id) {
    fprintf(stderr, "exiting because you have not implemented the add_pokemon_evolution function in pokedex.c\n");
    exit(1);
}

void show_evolutions(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the show_evolutions function in pokedex.c\n");
    exit(1);
}

int get_next_evolution(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the get_next_evolution function in pokedex.c\n");
    exit(1);
}

////////////////////////////////////////////////////////////////////////
//                         Stage 5 Functions                          //
////////////////////////////////////////////////////////////////////////

Pokedex get_pokemon_of_type(Pokedex pokedex, pokemon_type type) {
    fprintf(stderr, "exiting because you have not implemented the get_pokemon_of_type function in pokedex.c\n");
    exit(1);
}

Pokedex get_found_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the get_found_pokemon function in pokedex.c\n");
    exit(1);
}

Pokedex search_pokemon(Pokedex pokedex, char *text) {
    fprintf(stderr, "exiting because you have not implemented the search_pokemon function in pokedex.c\n");
    exit(1);
}

// Add definitions for your own functions below.
// Make them static to limit their scope to this file.

static struct pokenode *new_pokenode(Pokemon pokemon) {
    struct pokenode *node = malloc(sizeof(struct pokenode));
    assert(node != NULL);
    node->pokemon = pokemon;
    node->next = NULL;
    node->found = 0;
    return node;
}

static void add_to_end(Pokedex pokedex, struct pokenode *node) {
    
    if (pokedex->head == NULL) {
        node->current = 1;
        pokedex->head = node;
    } else {
        struct pokenode *current = pokedex->head;
        while (current != NULL) {
            if (pokemon_id(current->pokemon) == pokemon_id(node->pokemon)) {
                printf("Sorry, the pokemon is existed\n");
                exit(1);
            }
            current = current->next;
        }
        node->current = 0;
        current = node;
    }
}

static void print(struct pokenode *curr) {
    int first_type, second_type;
    first_type = pokemon_first_type(curr->pokemon);
    second_type = pokemon_second_type(curr->pokemon);
    if (curr->found == 1) {
        printf("Id: %d\n",pokemon_id(curr->pokemon));
        printf("Name: %s\n", pokemon_name(curr->pokemon));
        printf("Height: %.2lfm\n",pokemon_height(curr->pokemon));
        printf("Weigh: %.1lfkg",pokemon_weight(curr->pokemon));
        printf("Type: %s",pokemon_type_to_string(first_type));
        if (second_type != 0) {
            printf(" %s",pokemon_type_to_string(second_type));
        }
        printf("\n");
    } else {
        printf("Id: %d\n",pokemon_id(curr->pokemon));
        printf("Name: ");
        for(char *c = pokemon_name(curr->pokemon); *c != '\0'; c++) {
            printf("*");
        }
        printf("\n");
        printf("Height: --\n");
        printf("Weigh: --\n");
        printf("Type: --\n");
    }
            
}

