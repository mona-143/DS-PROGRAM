#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *gmt;

    // Get the current time in seconds
    time(&rawtime);

    // Convert to UTC
    gmt = gmtime(&rawtime);

    if (gmt == NULL) {
        printf("Failed to convert time\n");
        return 1;
    }

    // Print UTC time
    printf("Current UTC time: %02d-%02d-%04d %02d:%02d:%02d\n",
           gmt->tm_mday, gmt->tm_mon + 1, gmt->tm_year + 1900,
           gmt->tm_hour, gmt->tm_min, gmt->tm_sec);

    return 0;
}
