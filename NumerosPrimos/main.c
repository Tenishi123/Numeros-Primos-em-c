#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/**

Tenishi

**/
int main() {

	setlocale(LC_ALL,"Portuguese");

	int primo = 0, laco = 1, statusPrimo = 0;
	float z = 0;

	a:
		primo++;
		statusPrimo = 0;

	for( laco = 2; laco < primo; laco++){

		if( primo%laco == 0){

			statusPrimo = 1;

		}

	}

	if(statusPrimo == 0){
	printf("\n\nO número %i é primo", primo);
	}

	goto a;

	return 0;
}
