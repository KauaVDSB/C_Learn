#include <stdio.h>
#include <string.h>
#include "string.h"


void leString(char *string, int size_string) {
    if (fgets(string, size_string, stdin) != NULL) {
        return;
    } else {
        printf("tu é burro\n");
    }
}

int sizeString(char *string) {
    
    string[strcspn(string, "\n")] = 0;
    
    return strlen(string);
}

void inverteString(char *string) {
    int size_string = strlen(string);
    int i = 0, j = size_string -1;
    char temp;

    for (int i = 0; i < size_string / 2; i++) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        j--;
    }
}