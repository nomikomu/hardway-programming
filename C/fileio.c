#include <stdio.h>

void main(){
	FILE *flopp;

	/* input */
	flopp = fopen("test.txt", "w+");
	fprintf(flopp, "test of fprintf.\n");
	fputs("and fputs.\n", flopp);
	fclose(flopp);

	/* output */
	char buffer[255];
	
	flopp = fopen("test.txt", "r");
	fscanf(flopp, "%s", buffer);
	printf("\n	1: %s \n", buffer);

	fgets(buffer, 255, (FILE*)flopp);
	printf("	2: %s ", buffer);

	fgets(buffer, 255, (FILE*)flopp);
	printf("	3: %s \n", buffer);
	
	fclose(flopp);
}
