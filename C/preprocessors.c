#include <stdio.h>

#define square(x) ((x) * (x))
#define max(x,y) ((x) > (y) ? (x) : (y))

void main(){
	int var = 10;
	int a = 10, b = 5;

	printf("\n");

	printf("	File: %s\n", __FILE__);
	printf("	Date: %s\n", __DATE__);
	printf("	Time: %s\n", __TIME__);
	printf("	Line: %d\n", __LINE__);
	printf("	ANSI: %d\n", __STDC__);
	
	printf("\n");
	
	printf("| square: %d | ", square(var)); 
	printf("max %d | ", max(a,b));

	printf("\n");
}
