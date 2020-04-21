//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
  int u=1, d=9, c=9 , resultado;
  int es_Armstrong;
  
  resultado= pow(u,3)+pow(d,3)+pow(c,3);
  es_Armstrong= resultado>=100 && resultado<1000;
  
  printf("Es Armstrong? %d\n", es_Armstrong);
  
  
 return 0;
}
    
