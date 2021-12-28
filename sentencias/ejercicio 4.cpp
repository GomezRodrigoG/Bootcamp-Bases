#include<stdio.h>
#include<iostream>

using namespace std;

main(){
	int l1 ,l2, l3;
	
	printf("ingrese primer valor: ");
	cin>>l1;
	printf("ingrese segundo valor: ");
	cin>>l2;
	printf("ingrese tercer valor: ");
	cin>>l3;
	
	if((l1 + l2 > l3) && (l1+l3>l2) && (l2+l3>l1)){
		printf("Es posible construir un triangulo \n");
	}else{
		printf("No es posible construir un triangulo \n");
	}
	

	
	
	if(l1==l2 && l1==l3){
		printf("Es triangulo equilatero : \n");
    } else if(l1==l2 || l1==l3 || l2 == l3){
    	printf("Es triangulo isosceles : \n");
	} else {
		printf("Es triangulo escaleno : \n");
	}
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

