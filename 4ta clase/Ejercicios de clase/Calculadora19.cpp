//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
   //Declaracionx
   int  a, b, c, d,pr ,pi,   resultado ;
   char op, cambio_de_linea;
   
   printf("Ingrese cuatro numeros");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   printf("Ingrese la op(+,-,*,/)");
   scanf(" %c",&op);
   
  
   if(op=='+') {
   		pr = a +c ;
   		pi = b + d;
    }
   else {
   		if(op=='-') {
   			
   			pr=(a-c);
   			pi=(b-d);
	    }
		else {
			if(op=='*') {
			 	pr=(a*c-b*d);
			 	pi=(a*d+b*c);
		    }
			else {
				resultado=((a*c+b*d)/pow(c,2)+pow(d,2)) + ((b*c-a*d)/pow(c,2)+pow(d,2));
			}
		}
			 
 	}
 		
 	printf("resultado es  %d + %di",pr,pi)	;

 			 
   
  
   printf("El resultado es %d", resultado);
   
   
 
 return 0;
}
