//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   
   double vi,a,t , resultado;
   double vfinal,distancia;
   
   //Lectura
   printf("Usurio ingreseme los datos  a, t )");
   scanf("%lf %lf",&a,&t);
   
// Procesamiento 
   
   vi= 0; //Asignar 
   
   vfinal= vi+(a*t);
   
   distancia= (vi*t)+(a*pow(t,2)/2.0);
   
// D.Salida
   printf("\tEl valor de la distancia es %.3f",distancia);
   printf("\n\tEl valor del vfinal es %.2f",vfinal);
   
 return 0;
}
    
