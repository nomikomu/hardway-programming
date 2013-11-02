#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 0;
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *ohshit[] = {
        "No", "Yes",
        "Huh", "Franklin"
    };
    int num_ohshit = 4;

    for (i = 0; i < num_ohshit; i++) {
        printf("ohshit %d: %s\n", i, ohshit[i]);
    }

    return 0;
}
