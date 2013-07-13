#include <stdio.h>

void main(){
	int c;

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
	printf("\n");
}
