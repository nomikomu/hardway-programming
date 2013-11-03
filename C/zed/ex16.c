#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}

void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, const char *argv[])
{
    // Enetring two people structures
    // I don't give a fuck how high is Mikael Akerfeldt ok?
    // ... Or any other specification.
    struct Person *mikael = Person_create(
            "Mikael Akerfeldt", 39, 180, 80);
    struct Person *frank = Person_create(
            "Frank Blank", 20, 177, 95);

    // printing this structs out and giving mem address
    printf("Mikael is at memory location %p:\n", mikael);
    Person_print(mikael);

    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    // making everyone 20y older and printing out again
    frank->age += 20;
    frank->height -= 2;
    frank->weight -= 10;
    Person_print(frank);

    mikael->age += 20;
    mikael->height -= 2;
    mikael->weight -= 10;
    Person_print(mikael);

    // Cleaning up the memory
    Person_destroy(frank);
    Person_destroy(mikael);

    return 0;
}
