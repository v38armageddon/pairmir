#include <stdio.h>
// #include "time.c"
char user_input[20];

int main() {
    printf("Hello! I'm Pairmir!\n");
    printf("I'm a simple chatbot.\n");
    printf("For a list of what I can do, type 'help'.\n");
    printf("> ");
    scanf(user_input);
    while(1) {
         // Exit the program if the user want to exit
        if(user_input == "exit") {
            printf("Goodbye! Have a nice day!\n");
            break;
        }

        else if (user_input == "help") {
            printf("For a list of all commands, you can check in the wiki of the bot (https://github.com/v38armageddon/pairmir/wiki).\n");
        }

        else if (user_input == "Show me the time") {
            //time();
            printf("apples and banana");
        }

        else if (user_input =="How are you?") {
            printf("I'm fine, thank you!\n");
        }

        else {
            printf("I don't understand what you want to do.\n");
        }
    }
    return 0;
}
