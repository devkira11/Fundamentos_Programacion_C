//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
 double l1=15, l2=14, l3=100;
 int es_isoceles , existe;
 
 es_isoceles = l1==l3 ||l2==l1 || l2==l3;
 //simulamos a -b < c < a + b
 existe=  (fabs(l2-l1) <l3) && (l3 < l2+l1)  || (fabs(l2-l3) <l1) && (l1<l2+l3) || (fabs(l3-l1)<l2) && (l2<l3+l1);
   
 /*retirar comentario e incluir expresion solicitada*/;
      
 printf("Es isoceles? %d\n", es_isoceles);
 printf("Existe el triangulo? %d\n", existe);
 
 return 0;
}
