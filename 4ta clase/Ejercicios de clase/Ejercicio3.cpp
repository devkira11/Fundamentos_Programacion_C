//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
   //Declaracionx
   int  x, y  ;
   x=-2;
   if(x<=-1) {
   	  y=fabs(pow(x,3));	
   }
   else {
   		if(x>1&& x<=3) {
   			y=pow(x,2)+1;
		}
		else {
			y= 11;
		}
   }
   
 			 
   
  printf("El valor de y es %d", y);
  
   
   
 
 return 0;
}
