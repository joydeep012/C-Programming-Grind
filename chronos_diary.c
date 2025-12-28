#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fptr;
    char entry[500];
    
    // 1. Get the current time
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // 2. Open the file in "APPEND" mode ( and does not delete old entries)
    fptr = fopen("diary.txt", "a");
    if (fptr == NULL) {
        printf("Error: Could not open the diary portal!\n");
        return 1;
    }

    // 3. Get user input
    printf("Write your entry for [%s]: ", asctime(timeinfo));
    fgets(entry, sizeof(entry), stdin);

    // 4. Write the timestamp and entry to the file
    fprintf(fptr, "Date: %s", asctime(timeinfo));
    fprintf(fptr, "Entry: %s", entry);
    fprintf(fptr, "-----------------------------\n");

    // 5. Close the file 
    fclose(fptr);

    printf("Entry successfully locked into diary.txt!\n");
    return 0;
}
