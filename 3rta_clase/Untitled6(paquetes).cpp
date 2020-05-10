//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
   //Declaracionx
   int  l,c ;
   int resto,resultado;
   //Lectura
   printf("Usuario ingreseme los datos(l , c)");
   scanf("%d %d",&l , &c);
   
   

   resto= l%c;
   if(resto== 0){
   		resultado=l/c;
   }
   	else{
   		resultado=l/c + 1;
	}
	
	
	
   	printf("Se necesitan %d cajas",resultado);		 
   
 return 0;
}
