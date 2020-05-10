//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   int n , resultado;
   //Lectura
   printf("Usurio ingreseme la cantidad de numeros");
   scanf("%d",&n);
// Procesamiento 
   resultado= (pow(n,2) * pow(n+1,2))/4;
// D.Salida
   printf("El valor de n %d",resultado);
   
 return 0;
}
    
