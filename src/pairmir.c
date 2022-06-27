#include <stdio.h>
#include "pairmir.h"
#include "tchat.h"
#include "utility.h"

char user_input[20];

// Point the utility.c and the tchat.c files
char *utility (void);
char *tchat (void);

int main(char utility (void), char tchat (void)) {
    printf("Hello! I'm Pairmir!\n");
    printf("I'm a simple chatbot.\n");
    printf("For a list of what I can do, type 'help'.\n");
    // make a user input who loop
    while (1) {
        printf("> ");
        scanf("%s", user_input);
        switch (1, 2) {
            case 1:
                utility();
            case 2:
                tchat();
            default:
                printf("Pairmir: I don't understand what you want to do.\n");
        }
    }
    return 0;
}
