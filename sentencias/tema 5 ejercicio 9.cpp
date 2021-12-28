
#include<iostream>

using namespace std;

int main() {

int numeroDigitado=1;
double acumulado = 0;
int contador= 0;

printf(" ++++++Promedio de numeros++++++\n");

while (numeroDigitado >0)
{
	printf("Ingrese un numero (ingrese 0 para terminar)\n");
	cin>>numeroDigitado;
	if(numeroDigitado >0)
{

	acumulado += numeroDigitado;
	
	contador ++;

}
	

}
if(contador >0)
{
		printf("El promedio de los %d ",contador);
    printf("Numeros ingresados es:%.2f ",acumulado/contador);
}
else 
{
	printf("no se ingresaron numeros para calcular el promedio");
}



return 0 ;
}
