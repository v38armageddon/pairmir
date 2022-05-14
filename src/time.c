#include "pairmir.c"
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>

int time() {
    time_t s, val =1;
    struct tm* current_time;
    // Time in seconds
    s - time(NULL);
    current_time = localtime(&s);
    // Print the current time
    printf("The time is: %02d:%02d:%02d%s", current_time->tm_hour, current_time->tm_min, current_time->tm_sec, "\n");
}