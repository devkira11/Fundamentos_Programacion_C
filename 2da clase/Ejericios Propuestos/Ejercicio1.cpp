//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   int  x1,x2,y1,y2 , resultado;
   double punto1,punto2,distancia;
   
   //Lectura
   printf("Usurio ingreseme los puntos( x1 , y1 , x2 , y2)");
   scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
   
// Procesamiento 
   punto1 = (x2-x1);
   punto2 = (y2-y1);
   distancia = sqrt(pow(punto1,2)+pow(punto2,2));
// D.Salida
   printf("El valor de distancia es %lf",distancia);
   printf("El valor de punto1 es %lf",punto1);
   printf("El valor de punto2 es %lf",punto2);
   
 return 0;
}
    
