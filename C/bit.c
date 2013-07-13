#include <stdio.h>
#include <string.h>

struct idk{
	unsigned int a;
	unsigned int b;
} val1;

struct bit{
	unsigned int a : 1;
	unsigned int b : 1;
} val2;

void main(){
	
	printf("Memory size occupied by val1: %d \n", sizeof(val1));
	printf("Memory size occupied by val2: %d \n", sizeof(val2)); 

}
