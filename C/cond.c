#include <stdio.h>
#include <math.h>

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

	/*		big nest	*/

	const double pi = 3.14159;
	const double gravity = 9.8;
	const double rainbow = 8.9;
	const double mol = 6.02214;

	double x = 1;
	double chngone, chngtwo;
	double pick = 455.21122;

	chngone = x * pi * gravity * rainbow;
	chngtwo = pi * gravity * rainbow * (x - 0.5);

	printf("val one: %f \n",chngone);
	printf("val two: %f \n",chngtwo);

	if(chngone >= 256 || chngtwo >= 128){
		printf("it's working!\n\n");
		auto double ra = 3.0324;
		double wm = 25, sh;
		sh = wm * ra * mol / pi;

		if(sh <= 256 && sh >= 128){
			printf("val sh: %f \n",sh);
			double fmax(double sh,double chngone);
			double fmin(double sh,double chngone);
			if(!(fmax && chngone)){printf("C math! \n");}
			else if(fmax || chngone){
				printf("still C math! \n");
				const double typa = 32, typb = 64, typc = 128, typd = 256;

				if(sh <= typa){printf("a: %f \n",typa);}
				else if(sh <= typb){printf("b: %f \n",typb);}
				else if(sh <= typc){printf("c: %f \n",typc);}
				else if(sh <= typd){printf("d: %f \n",typd);}
				else{printf("UNKNOW PROBLEM");}
			}
			else if(fmax && chngone){printf("yeah, C math! \n");}
			else{printf("something went wrong! \n");}		
		}
	}

	/* LOOPS :3 */
	int cond = 0,i = 0;

	do{
		cond += 1;
		for(i <= 5; i = i + 1;){
			printf("statement -- %d -- eval \n",i);
			/* infinite loop problem */
			if(i == 5){break;}
		}
		while(pick < 512){
			if(pick <= 32){pick *=8;}
			else{pick *=15;}
			printf("end?");
		}
	}while(cond > 2); 

	return 0;
}


