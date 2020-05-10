#include <stdio.h>
#include <math.h>

//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   int  v,t;
   double distancia; 
   
   
   //Lectura
   printf("Usurio ingreseme los datos( v,t )");
   scanf("%d %d",&v,&t);
   
   // Procesamiento 
   distancia= (double)(v*50)/3*t;
   
// D.Salida
   printf("El valor de la distancia es %.2f metros",distancia);

   
 return 0;
}
    
