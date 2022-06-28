#include <stdio.h>
#include "pairmir.h"
#include "tchat.h"
#include "utility.h"

void tchat(int id, char *pairmir) {
    if (user_input == "How are you?") {
        printf("Pairmir: I'm fine, thank you!\n");
    }

    else if (user_input == "What's your name?") {
        printf("Pairmir: My name is Pairmir.");
    }

    else if (user_input == "What is your creator?") {
        printf("Pairmir: My creator is v38armageddon!");
    }

    else if (user_input == "What is Pairmir?") {
        printf("Pairmir: It's me! I'm a tchat bot but also a utility bot!");
    }
}
