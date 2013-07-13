#include <stdio.h>

int main(){
	/*int c;

	printf("enter val: ");
	c = getchar();

	printf("entered: ");
	putchar(c);
	printf("\n\n");

	char str[100];	
	printf( "Enter str :");
	gets( str );
	
	printf( "Entered: " );
	puts( str );
	printf("\n");*/

	char str[100];
	int i;
	printf ("Enter val: ");
	scanf("%s %d", str, &i);

	printf("\nEntered: %s, %d \n", str, i);
	return 0;
}
