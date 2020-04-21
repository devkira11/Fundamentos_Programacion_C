//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   
   double  vi,a,t , resultado;
   double vfinal,distancia;
   
   //Lectura
   printf("Usurio ingreseme los datos( vi, a, t )");
   scanf("%lf %lf %lf",&vi,&a,&t);
   
// Procesamiento 
   
   vfinal= vi+(a*t);
   
   distancia= (vi*t)+(a*pow(t,2)/2.0);
   
// D.Salida
   printf("El valor de la distancia es %lf",distancia);
   printf("El valor del vfinal es %lf",vfinal);
   
   
 return 0;
}
    
