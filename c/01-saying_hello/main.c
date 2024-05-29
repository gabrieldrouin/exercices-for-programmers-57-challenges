#include <stdio.h>
#include <string.h>

int main() {
    char name[30];

    printf("What is your name? ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        name[strcspn(name, "\n")] = '\0';
        if (name[0] != '\0') {
            printf("Hello %s, nice to meet you!", name);
        }
    }
    return 0;
}

