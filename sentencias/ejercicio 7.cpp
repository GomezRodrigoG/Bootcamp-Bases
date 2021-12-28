#include<stdio.h>
#include<iostream>

using namespace std;

main(){
int valor1 , valor2 ;
int opcion;
float total = 0;

    printf("ingrese numero 1 : ");
	cin>>valor1;
	printf("ingrese numero 2 : ");
	cin>>valor2;
	
	printf("---------------------------\n");
	printf("1."  "Para sumar\n");
	printf("2."  "Para restar\n");
	printf("3."  "Para multiplicar\n");
	printf("4."  "Para dividir\n");
	printf("5."  "Para calcular el resto de la div. entera\n");
	printf("---------------------------\n");
	
	
	printf("ingrese un numero del 1 al 5:");
	cin>> opcion;
	
	
	switch(opcion){
		case 1: total= valor1 + valor2;
			break;
		case 2: total= valor1 - valor2;
			break;
		case 3: total= valor1 * valor2;
			break;
        case 4: if(valor2 >0){
			total= valor1 / valor2;
		}else{
			printf("no se puede dividir por 0");
		}
			break;
		case 5 : 
			if (valor2!=0){
		 		total =valor1 % valor2;
			} else{
				printf("ingresaste 0");
			}
		    break;
		default: printf ("ingresaste un valor incorrecto");
		}
	
	printf("Su valor total es : %f", total);
	
	return 0;
}
