//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   int  a,b,c , resultado;
   double semisuma,area;
   
   //Lectura
   printf("Usurio ingreseme los lados( a ,b ,c )");
   scanf("%d %d %d",&a,&b,&c);
   
// Procesamiento 
   semisuma= (a+b+c)/2.0;
   
   area = sqrt(semisuma*(semisuma-a)*(semisuma-b)*(semisuma-c));
// D.Salida
   printf("El valor de la semisuma es %lf",semisuma);
   printf("El valor del area es %lf",area);
   
   
 return 0;
}
    
