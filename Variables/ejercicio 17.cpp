#include<iostream>
#include "stdio.h"

using namespace std;
int main(){
	
	int hora , minutos , segundos , total = 0;
	
	printf("ingrese los segundos :");
	cin>> segundos;
	
	total+= segundos;
	
	printf("ingrese los minutos");
	cin>> minutos;
	
	total+=minutos*60;
	
	printf("ingrese las horas");
	cin>>hora;
	
	total+=hora*3600;
	
	
	
	
	
	
	
	/*
	hora = HORAS / 3600;
	minutos = hora/60;
	segundos = hora%60;
	*/
	
	printf("total de segundos: %d\n" , total);
	
	
	return 0;
	
	
	
	
	
	
	
}
	
