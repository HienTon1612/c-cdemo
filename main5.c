#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	printf("%i \n", plus(6, 7));
	printf("%i", minus(6, 7));
}
int plus(int a, int b){
	return a + b;
}
int minus(int a, int b){
	return a - b;
}
