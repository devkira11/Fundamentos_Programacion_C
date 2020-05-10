 //1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
  int a;
  int es_bisiesto;
  
  printf("Ingrese un numero a verificar");
  scanf("%d", &a);
  
  
  
  es_bisiesto= (a%4 == 0) && (a%100!= 0) || (a%400 == 0);

  printf("Es bisiesto?%d", es_bisiesto);
  return 0;
}
    
