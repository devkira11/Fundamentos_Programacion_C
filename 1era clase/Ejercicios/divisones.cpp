//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS

int main() {
	
	//Entrada de datos  ( Lectura )
	//ASignacion multiple 
	double resultado;
	
	//resultado = a / b; //2.5
	resultado = 5 / 2; //2
	
	resultado = 5 / 2;
	
	/*Formas
	1) Al cociente le pones un decimal , 2.0
	2) Agregar el tipo de dato entre parentesis antes del cociente o antes de la operacion
	    5/(doouble) 2 
	    (double) 5/2;	
	*/
	
	resultado = 5 + 2 * 3 -1/4.0;
	
	int a=2, b=4, c=16, d;

	//OPERACIONES DE IZQUIERDA A DERECHA
	d=c/b/a; // 2
	
	printf("el valor de d es %d", d);
	
	printf("el valor del resultado es %lf", resultado);
	return 0;
}
