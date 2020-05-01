//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
 double l1=1, l2=10, l3=1;
 int es_isoceles , existe;
 
 es_isoceles = l1==l3 ||l2==l1 || l2==l3;
 //simulamos a -b < c < a + b
  	 existe=  (fabs(l2-l1) <l3) && (l3 < l2+l1)  || (fabs(l2-l3) <l1) && (l1<l2+l3) || (fabs(l3-l1)<l2) && (l2<l3+l1);
 
   if (existe == 1) {
	  printf("El triangulo si existe");	
	  if (l1==l2 && l2==l3 && l1==l3) {
	  	printf("El tringulo es equilatero");
	  }	
	 
	  if (es_isoceles) {
		printf("El triangulo es isosceles");
	  }
	  if (l1!= l2 && l2!=l3 && l1!=l3)  {
	  	printf("El triangulo es escaleno");
	  }
	     	
   } else{
	  printf("El triangulo no existe");	
   }
     
 
 return 0;
}
