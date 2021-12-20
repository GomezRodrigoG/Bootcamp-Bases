#include<iostream>
#include "stdio.h"

using namespace std;
int main(){
	//ojo, no ingresar un 0 
	int valor1 , valor2 , suma = 0 ,resta = 0 , divicion = 0 , multiplicacion = 0 ;
	
	printf("digite un numero :");
	cin>>valor1;
	printf("digite otro numero :");
	cin>>valor2;
	
	
	suma = valor1 + valor2;
	resta =valor1 - valor2;
	divicion = valor1 / valor2;
	multiplicacion = valor1 * valor2;
	
	printf("La suma es: %d\n", suma);
	printf("La resta es: %d\n", resta);
	printf("La divicion es : %d\n", divicion);
	printf("La multiplicacion es: %d\n", multiplicacion);
	
	
	
	
	return 0;
	
	
	
}
