#include <stdio.h>

const float ex_m = 1.9555; 	/* no relativity here */
const float ex_m_a = 8.44;
const float gravity = 9.8;	/* constant gravity acceleration */


double force(float mass, float acceleration);	/* function declaration */
double max_force(float first, float second);
double min_force(float first, float second);

void main(){
	double out_force_one, out_force_two;
	float max_f, min_f;

	out_force_one = force(ex_m, gravity);
	out_force_two = force(ex_m_a, gravity);

	printf("\n1st force(m*a): %f \n", out_force_one);
	printf("2nd force(m*a): %f \n", out_force_two);

	max_f = max_force(out_force_one, out_force_two);
	min_f = min_force(out_force_one, out_force_two);

	printf("max force: %f \n", max_f);
	printf("min force: %f \n\n", min_f);
}

double force(float mass, float acceleration){
	double result;
	result = mass * acceleration;

	return result;
}

double max_force(float first, float second){
	float result;
	
	if(first > second){result = first;}
	else{result = second;}
	
	return result;
}

double min_force(float first, float second){
	float result;
	
	if(first < second){result = first;}
	else{result = second;}

	return result;
}
