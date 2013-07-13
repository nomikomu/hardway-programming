#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
	char name[100];
	char *description;

	strcpy(name, "Togusa Shaibusa");

	description = malloc(200 * sizeof(char));
	if(description == NULL){
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else{
		strcpy(description, "I always liked ricin mai desktop, idk why.");
	}

	description = realloc(description, 100 * sizeof(char));
	if(description == NULL){
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else{
		strcat(description, "Top A class otaku, watchin Evangerion.");
	}

	printf("name = %s\n", name);
	printf("description = %s\n", description);

	free(description);
}

