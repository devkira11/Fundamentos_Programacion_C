 //1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
  double l1=13.5, l2=13.5, l3=12.5, l4=12.5;
  int es_cuadrado, es_rectangulo;
  
  es_cuadrado= l1==l2 && l2==l3 && l3==l4;
  es_rectangulo= l1==l2 && l3==l4;
  printf("Es cuadrado? %d\n", es_cuadrado);
  printf("Es rectangulo? %d\n", es_rectangulo);
 
 return 0;
}
    
