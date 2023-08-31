#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "correct_password") == 0) {
        printf("Congratulations!\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}

