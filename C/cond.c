#include <stdio.h>

int main(){
	static int a = 25;
	static char b = 'B';

	if (a<10){printf("a is less than 10\n");}
	else if(a<15){printf("a is less than 15\n");}
	else if(a<20){printf("a is less than 20\n");}
	else if(a<25){printf("a is less than 25\n");}
	else if(a<30){printf("a is less than 30\n");}
	else{printf("a is not less than 30\n");}
	
	printf("value of a is: %d \n",a);
	
	/*	grades	*/

	switch(b){
		case 'A':
			printf("Excellent!\n"); break;
		case 'B':
			printf("Kewl bro.\n"); break;
		case 'C':
			printf("Well done.\n"); break;
		case 'D':
			printf("You passed\n"); break;
		case 'F':
			printf("ganbatte!\n"); break;
		default:
			printf("Invalid grade\n"); 
	}
	printf("Your grade is %c \n", b);

	return 0;
}


