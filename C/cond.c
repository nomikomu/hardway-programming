#include <stdio.h>

int main(){
	static int a = 5;
	if (a<10){printf("a is less than 10\n");}
	printf("value of a is: %d \n",a);
	return 0;
}

