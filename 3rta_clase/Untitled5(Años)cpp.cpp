//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
   //Declaracionx
   int  anio,es_bisiesto,p,q,r ;
   int resultado;
   //Lectura
   printf("Usuario ingreseme el anio(ñ)");
   scanf("%d",&anio);
   
   p= anio%4 == 0;   
   q= anio%100 == 0;
   r= anio%400 == 0;
   
   es_bisiesto= p&&(!q||r);

	// Procesamiento ;
	//p ^ (:q _ r).;
	
   if(es_bisiesto){
   		printf("El anio tiene 366 dias");
   }
   else{
   	    printf("El anio tiene 365 dias");

   }
   			 
   
   
   
 
 return 0;
}
