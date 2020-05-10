//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS

int main() {
	
	//APARTIR DE ACA TODO LO QUE PARA TI ES VERDADERO : TRUE ( 1 ) , TODO LO QUE ES FALSO O UN NO : FALSE (0)
	//EN LOGICA EL 1 ES TRUE , Y EL 0 ES FALSE
	
	int p , q, resultado;
	
	p = 1;
	q = 0;
	
	resultado =  p || q ; // VERDADERP
	resultado =  p && q ; // FALSE  
	
	/*
	p   q   resultado
	V   V     V   
	V   F     F
	F   V     F
	F   F     F
	*/

	printf("el valor del resultado es %d", resultado);
	return 0;
}
