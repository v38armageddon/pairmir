#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "time.c"
#include "date.c"
char user_input[];

int main() {
    printf("Hello! I'm Pairmir!\n");
    printf("I'm a simple chatbot.\n");
    printf("For a list of what I can do, type 'help'.\n");
    while(1) {
        printf("> ");
        gets(user_input);

        // Exit the program if the user want to exit
        if(strcmn(user_input,"exit")==0) {
            printf("Goodbye! Have a nice day!\n");
            break;
        }

        elif(strcmn(user_input,"help")==0) {
            printf("For a list of all commands, you can check in the wiki of the bot\n");
            printf("Do you want to see the wiki? (y/n) ");
            if(strcmn(user_input,"y")==0) {
                printf("Okay, here you go!\n");
                system("start https://github.com/v38armageddon/pairmir/wiki");
            elif(strcmn(user_input,"n")==0) {
                printf("Okay, I won't show you the wiki.\n");
            }
        }

        elif(strcmn(user_input,"Show me the time")==0) {
            time();
        }

        elif(strcmn(user_input,"How are you?")==0) {
            printf("I'm fine, thank you!\n");
        }

        else {
            printf("I don't understand what you want to do.\n");
        }
    }
    return 0;
}