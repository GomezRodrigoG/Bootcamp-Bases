#include<stdio.h>

main(){
	
	int edad1 , edad2 , edad3 , max;
	
		printf("Diguite la primera edad :");
		scanf("%i" , &edad1);
		printf("Diguite la segunda edad :");
		scanf("%i" , &edad2);
		printf("Diguite la tercera edad :");
		scanf("%i" , &edad3);
		
		if(edad1>edad2){
			if(edad1>edad3){
				max=edad1;
			}
			else{
				max=edad3;
			}
		}
		else{
			if(edad2>edad3){
				max=edad2;
			}
			else{
				max=edad3;
			}
		}
		
		
		/*
		if(edad1>edad2 && edad1>edad3){
			max = edad1;
		} else if(edad2>edad1 && edad2>edad3){
			max = edad2;
		} else {
			max = edad3;
		}
		*/
		
		printf("El mayor de los 3 edades es :%i\n",max);
	
	
	
	
	
	
	
	return 0 ;

}
