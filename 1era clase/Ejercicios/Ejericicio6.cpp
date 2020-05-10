//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
 int n=3, a=3, b=10;
 int pertenece_a_rango;  /*retirar comentario e incluir expresion solicitada*/;
   
  pertenece_a_rango = (n>a || n==a) && (n<b ||n==b);

 printf("%d pertenece al rango [%d,%d]? %d\n", n, a, b, pertenece_a_rango);
  
  
  
 return 0;
}
    
