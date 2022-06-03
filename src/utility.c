#include <stdio.h>
#include "pairmir.h"

void utility() {
    // Exit the program if the user want to exit
    if(user_input == "exit") {
        printf("Goodbye! Have a nice day!\n");
        return 0;
    }
        
    else if (user_input == "help") {
        printf("For a list of all commands, you can check in the wiki of the bot (https://github.com/v38armageddon/pairmir/wiki).\n");
    }

    else if (user_input == "Show me the time") {
        //time();
        printf("apples and banana");
    }
}