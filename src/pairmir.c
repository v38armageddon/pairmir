#include <stdio.h>
#include "pairmir.h"
#include "tchat.h"
#include "utility.h"

char user_input[20];

void pairmir(int main, int id, char *utility, char *tchat) {
    // make a user input who loop
    while (1) {
        printf("> ");
        scanf("%s", user_input);
        switch (*utility, *tchat) {
            case *utility:
                utility();
            case *tchat:
                tchat();
            default:
                printf("Pairmir: I don't understand what you want to do.\n");
        }
    }
    return 0;
}

int main(void) {
    printf("Hello! I'm Pairmir!\n");
    printf("I'm a simple chatbot.\n");
    printf("For a list of what I can do, type 'help'.\n");
}
