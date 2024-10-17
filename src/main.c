/**
 * The main file of Soulsand.
 */

#include <stdio.h>
#include <string.h>

FILE *filePtr;

int main(int argc, char* args[]) {

    if(argc < 2) {
        printf("Error in the usage: soulsand <subcommand>");
        return -1;
    }

    if(strcmp(args[1], "create") == 0 || strcmp(args[1], "init") == 0) {
        printf("[INFO] Creating a new Soulsand server at your location!");
        filePtr = fopen(".soulsand", "a");
        fprintf(filePtr, "none\nserver.jar");

        fclose(filePtr);

        return -1;
    }

    filePtr = fopen(".soulsand", "w");

    if(filePtr == NULL) {
        printf("Error: This isn't a soulsand environment! Please run soulsand create/init in order to create one!");
        return -1;
    }

    // Sub command handling
    if(strcmp(args[1], "get") == 0) {
        if(argc < 3) {
            printf("Error in the usage: soulsand get <version> [mirror]");
            return -1;
        }

        char* version = args[2];

        printf("[INFO] Getting version %s", version);

    }

}
