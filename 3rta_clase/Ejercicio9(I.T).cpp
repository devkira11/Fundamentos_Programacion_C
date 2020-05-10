//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
   // D.Entrada 
   const float PI  = 3.1416; //Definimos una constante llamada PI

   //Declaracionx
   int  x;
   double radianes, parte1, parte2;
   printf("Usuario ingrese el angulo(x)");
   scanf("%d", &x);
   
   radianes = x*PI/180;
   //Lectura
     parte1= sin(2*radianes);
	 parte2= 2*sin(radianes)*cos(radianes);
	 
     //parte1= floor( sin(2*radianes) * 100) / 100;
	 //parte2= floor( 2*sin(radianes)*cos(radianes) *100) / 100;
	 
	 printf("\n numero %15f",parte1);
	 printf("\n numero %15f",parte2);
	
	 if( parte1 == parte2){
	 	printf("\n Se cumple la identidad sen(2x)=2sen");
	 }
	 else{
	 	printf("\n No se cumple la identidad sen(2x)=2sen");
	 }
	
 	 
   
 return 0;
}
