#include<stdio.h>
#include<iostream>

using namespace std;

main(){
	int edad = 0;
	
	printf("digite una edad comprendida entre 18 y 40 anios: ");
	
	cin>>edad;
	if(edad>= 18 && edad<= 40){
		printf("Correcto");
	} else{
		printf("ud ingreso una edad fuera del rango");
	}
	
	
	return 0 ;

}
