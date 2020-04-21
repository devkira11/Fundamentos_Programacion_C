//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS

int main() {
	
	//Entrada de datos  ( Lectura )
	//Declaracion de variables 
	double lado , volumen;
	//double volumen ;
	
	int altura = 12; //Ver pagina 13  1.7.1
		
	//Asignar ( OPerador de asignacion de igualdad  ) 
	lado = 1.5;
	

	//Procesamiento
	//pow(lado,3)
	volumen = lado*lado*lado ;

	
	//Salida de datos   ( Imprimir )
	
	printf("el volumen es %lf",volumen);
	
	
	return 0;
}
