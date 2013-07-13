#include <stdio.h>

void main(){
	int a = 256, b = 255;
	double c;

	c = (double) a / b;
	printf("value of c: %f \n", c);

	int r = 10, out;
	char w = 'c';

	out = r + w;
	printf("value of out: %d \n", out);
}
