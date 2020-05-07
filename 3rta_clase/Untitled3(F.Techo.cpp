//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
   //Declaracionx
   double  x ;
   int parte_entera,resultado;
   //Lectura
   printf("Usuario ingreseme la varibale(x)");
   scanf("%lf",&x);

	// Procesamiento ;
	parte_entera= trunc(x);
	
   if(x>0){
   		resultado=x+1;
   }
   else{
   		resultado=x;
   }
   			 
   
  printf("La parte_entera es %d", resultado);
  
   
   
 
 return 0;
}
