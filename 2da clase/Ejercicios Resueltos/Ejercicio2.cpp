//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   double a,b,c , resultado;
   double discriminante,x1,x2;
   //Lectura
   printf("Usurio ingreseme las coeficientes de la ecuacion( A , B , C)");
   scanf("%lf %lf %lf",&a,&b,&c);
   
// Procesamiento 
   discriminante=pow(b,2)- 4*a*c;
   x1= (-b+sqrt(discriminante))/2*a;
   x2= (-b-sqrt(discriminante))/2*a;
// D.Salida

   printf("El valor de x1 es %lf",x1)
   printf("alor de x2 es1%lf",x2); 1
   
 return 0;
}
    
