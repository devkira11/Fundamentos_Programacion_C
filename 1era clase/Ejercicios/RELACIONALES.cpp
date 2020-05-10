//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS

int main() {
	
	//APARTIR DE ACA TODO LO QUE PARA TI ES VERDADERO : TRUE ( 1 ) , TODO LO QUE ES FALSO O UN NO : FALSE (0)
	
	int a , b, c , d, resultado, resultado2;
	
	a = 4;
	b = 2;
		
	c=  3;
	d = 1;	
	//El doble igual compara el valor , solo el valor , el triple igual compara el valor y el tipo de dato
	resultado = a == b ; // 1 
	resultado2 = c == d;
	/*
	if( resultado || resultado2){
		printf("TODO OK");
	}
	else{
		printf(" SON VALORES DIFERENTES JUAN");
	}*/

	return 0;
}
