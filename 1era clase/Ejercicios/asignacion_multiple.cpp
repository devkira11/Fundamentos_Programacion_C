//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS

int main() {
	
	//Entrada de datos  ( Lectura )
	//ASignacion multiple 
	double a  = 12.3 , b = 10 , c= 12;

	//IGUALDAD DE DERECHA IZQUIERDA
	//c = b = a;
	//a = b = c;
	
	c = b  = a + 1;
	
	
	
	printf("el valor de los datos son : \n  %lf %lf %lf",a,b,c);
	return 0;
}
