#include <stdio.h>
#include "tchat.h"
#include "utility.h"

// #include "time.c"
char user_input[20];

int main() {
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
                printf("I don't understand what you want to do.\n");
        }
    }
    return 0;
}