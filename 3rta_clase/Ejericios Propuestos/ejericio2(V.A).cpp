//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>
//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
// D.Entrada 
   //Declaracion
   int a ;
   double valor_absoluto;
   //Lectura
   printf("Usurio ingreseme el numero ( a )");
   scanf("%d", &a);
// Procesamiento ;
   valor_absoluto=a;
 // D.Salida
   
   	if(a<0){
      valor_absoluto=a*-1;}
      else{ if(a>=0){
      valor_absoluto=a;
	  }
	  }
  
  printf("El valor_absoluto es %lf", valor_absoluto);

 return 0;
}
