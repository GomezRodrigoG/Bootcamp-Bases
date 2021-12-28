#include<stdio.h>
#include<iostream>

using namespace std;

main(){
	float pesoADolar = 0.0098 , dolar , pesoAEuro =0.0087  , pesoAReal =0.056, total, dinero ;
	int opcion;
	float dolarAPeso =102.19 , dolarAReal =5.74, dolarAEuro =0.89;
	
	printf("ingrese su cantidad de dinero: ");
	cin>> dinero;
	
	
	printf("---------------------------\n");
	printf("1."  "pesos a dolar\n");
	printf("2."  "pesos a real\n");
	printf("3."  "pesos a euros\n");
	printf("4."  "dolar a peso\n");
	printf("5."  "dolar a real\n");
	printf("6."  "dolar a euro\n");
	printf("---------------------------\n");
	
	printf("ingrese un numero del 1 al 6:");
	cin>> opcion;
	
	switch(opcion){
		case 1: total= dinero * pesoADolar;
			break;
		case 2: total = dinero * pesoAReal;
			break;
		case 3 : total= dinero * pesoAEuro;
			break;
		case 4 : total = dinero * dolarAPeso;
			break;
		case 5 : total = dinero * dolarAReal;
		    break;
		case 6: total = dinero * dolarAEuro;
		    break;
			
		}
		
			printf("Su valor total es : %f", total);
		}
		
	
	
	

	
	
	
	
	
	
	
	




