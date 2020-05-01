//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion

   double a,b,c, resultado;
   //Lectura
   printf("Usurio ingreseme las coeficientes de la ecuacion( A , B , C)");
   scanf("%lf %lf %lf",&a,&b,&c);
   double discriminante,x1,x2, discrimante;
   
// Procesamiento 

   discriminante=pow(b,2)- 4*a*c;
   if (discriminante>0){
	   x1=(-b+sqrt(discriminante))/2*a;
	   x2=(-b-sqrt(discriminante))/2*a;
	   printf("El valor de x1 es %lf",x1);
  	   printf("El valor de x2 es %lf",x2);   
   } else {
   	   printf("La discrimante es negativa");
   }  
   
    
   
   
 return 0;
}
    
