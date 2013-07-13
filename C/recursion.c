#include <stdio.h>

int factorial(unsigned int i){
	if(i <= 1){
		return 1;
	}
	return i * factorial(i - 1);
}

int fibonaci(int i){
	if(i == 0){return 0;}
	if(i == 1){return 1;}
	return fibonaci(i-1) + fibonaci(i-2);
}

int main(){
	/*int i = 15;
	printf("factorial of %d is %d \n", i, factorial(i));*/

	int j;
	for (j = 0; j < 10; j++){
		printf("%d\t%n", fibonaci(j));
	}
	
	printf("\n");
	return 0;
}
