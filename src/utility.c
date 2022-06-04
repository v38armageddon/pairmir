#include <stdio.h>
#include <time.h>
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
        time_t s, val =1;
        struct tm* current_time;
        // Time in seconds
        s - time(NULL);
        current_time = localtime(&s);
        // Print the current time
        printf("The time is: %02d:%02d:%02d%s", current_time->tm_hour, current_time->tm_min, current_time->tm_sec, "\n");
    }
}
