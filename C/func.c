#include <stdio.h>

const float ex_m = 1.9555; 	/* no relativity here */
const float gravity = 9.8;	/* constant gravity acceleration */

double force(float mass, float acceleration);	/* function declaration */

void main(){
	double out_force;
	out_force = force(ex_m, gravity);
	printf("\nforce(m*a): %f \n\n", out_force);
}

double force(float mass, float acceleration){
	double result;
	result = mass * acceleration;

	return result;
}

