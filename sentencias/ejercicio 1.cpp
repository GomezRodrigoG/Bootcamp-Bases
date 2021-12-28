  #include<stdio.h>

main(){
	
	int n1,n2 ;
	
	printf("Diguite 2 numeros :");scanf("%i %i" , &n1,&n2);
	
	if(n1 % n2 == 0 && n1 >10){
		printf("El numero %i es divisible entre %i",n1,n2);
	} else if( n1 == 10) {
		printf("el  numero es 10");
		
	} else {
		printf("no son divisibles");
	}

	
	
	
	
	
	return 0;
	
	
}
