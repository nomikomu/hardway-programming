#include <stdio.h>

int main(){
	float gravity = 14.5;
	float *ip;

	ip = &gravity;

	printf("Address of gravity variable: %x \n", &gravity);
	printf("Address stored in ip variable: %x \n", ip);
	printf("Value of *ip variable: %f \n", *ip);

	return 0;
}
