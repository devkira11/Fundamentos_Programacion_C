//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>

/* Este primer programa tiene la intencion de
 presentar la estructura basica de un programa
 usando el lenguaje ANSI
*/

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS


//Funcion principal 
int main() {
	
	//Entrada de datos  ( Lectura )
	//Declaracion de variables 
	int EDAD ;
	EDAD = 24; // Seteando variables 
	EDAD = 23; // Seteando variables 

	int peso , altura ;
	
	double promedio = 14.5;
	
	//Procesamiento
	
	
	//Salida de datos   ( Imprimir )
	
	//Funcion printf : 2da version pasando variables ( " MENSAJE  %d / %lf / %c " , NOMBRE_VARIABLE )	
	//Impreso un entero 
	printf("Mi EDAD es %d", EDAD);
	printf("mi promedio es %lf", promedio);

	return 0;
}
