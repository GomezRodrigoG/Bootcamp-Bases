#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	srand(time(NULL));
	int mayores = 0, menores = 0,cantMayores = 0, cantMenores = 0;
	
	for(int i = 0; i < 100; i++){
		int numero = rand()%200;
		
		printf("%d\n",numero);
		
		if(numero>100){
			mayores+=numero;
			cantMayores++;
		}else{
			menores+=numero;
			cantMenores++;
		}
	}
	
	printf("La cantidad de numeros menores a 100 es : %d, y su suma es: %d\n",cantMenores,menores);
	printf("La cantidad de numeros mayores a 100 es : %d, y su suma es: %d",cantMayores,mayores);
	
	/*
	int count = 0;
	int fila = 0;
	
	while(count<100){
		for(int i = 0; i < 5; i++){
			printf("%d\t",count);
			count++;
		}
		
		fila++;
		
		if(fila>2){
			printf("\n");
			fila=0;
		}
		
		printf("\n");
	}
	*/
	
	return 0;
}
