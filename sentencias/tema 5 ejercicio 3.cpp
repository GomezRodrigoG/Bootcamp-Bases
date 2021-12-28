#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int valor1 , pares = 0, impares = 0;
	
	printf("Ingrese un numero: ");
	cin>>valor1;
	
	printf("Estos son los numeros impares:\n");
	for(int i = 0; i<=valor1; i++){
		if(i % 2 !=0){
			printf("%d\n",i);
			impares++;
		}
	}
	
	printf("Estos son los numeros pares:\n");
	for(int i = 1; i<=valor1; i++){
		if(i % 2 ==0){
			printf("%d\n",i);
			pares++;
		}
	}
	
	printf("La cantidad de numeros impares es : %d \n",impares);
	printf("La cantidad de numeros pares es : %d \n",pares);
	
	return 0;
}
