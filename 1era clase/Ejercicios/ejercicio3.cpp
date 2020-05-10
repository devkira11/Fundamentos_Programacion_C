//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
	
	int p,q,r, resultado;
	p=1;
	q=1;
	r=1;
	
	//p -> (r v !q)
 resultado= !p || (r || !q);
    printf("El resultado es %d", resultado);
	return 0;
}
    
