#include<iostream>
#include "stdio.h"

using namespace std;
int main(){
	float euro , dolares , libras , dinero = 0;
	
	float euroAPeso = 115.15 , dolarAPesos =102.13 , librasAPesos = 134.88;
	
	printf("ingrese cantidad de dinero :");
	cin>> dinero;
		
	euro= dinero/euroAPeso;
	dolares=dinero/dolarAPesos;
	libras=dinero/librasAPesos;
	
	printf("su valor en euros es : %f\n",euro);
	
	printf("su valor en dolares es : %f\n",dolares);
	
	printf("su valor en libras es : %f\n",libras);
	
	printf("-------------------------");
	printf("\nCotizacion utilizada\n");
	printf("Euro: %f\n", euroAPeso);
	printf("dolares: %f\n", dolarAPesos);
	printf("libras: %f\n", librasAPesos);
	
	
	
	
}

	

