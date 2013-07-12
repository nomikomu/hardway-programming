#include <stdio.h>

double baransu[5] = {3.141, 1.11, 2.22, 3.33, 4.44};

void main(){
	int n[10];
	int i,j;

	for(i = 0; i < 10; i++){ n[i] = i + 100; }

	for(j = 0; j < 10; j++){ printf("el.[%d] = %d\n", j , n[j]); }

	int gravity, rainbow;
	int modif[20];
	
	for(rainbow = 0; rainbow < 20; rainbow + 2){ modif[rainbow] = rainbow + 22 }
	for(gravity = 0; gravity < 20; gravity + 2){ 
		printf("el.[%d] = %d\n", gravity, modif[rainbow]);
	}
}
