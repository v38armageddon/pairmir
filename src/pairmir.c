#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
char user_input[];

int main() {
    printf("Hello! I'm Pairmir!\n");
    while(1) {
        printf("> ");
        gets(user_input);

        // Exit the program if the user want to exit
        if(strcmn(user_input,"exit")==0) {
            printf("Goodbye! Have a nice day!\n");
            break;
        }
    }
    return 0;
}