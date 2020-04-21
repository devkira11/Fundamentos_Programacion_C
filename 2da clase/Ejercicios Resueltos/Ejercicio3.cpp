//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {

// D.Entrada 
   //Declaracion
   int x,cociente1,cociente2,cociente3,resto1,resto2,resto3,cantidad;

   //Lectura
	printf("Usuario ingresa la cantidad de dinero");
	scanf("%d",&x);
// Procesamiento 
    cociente1= x/50; // 2
    resto1=x%50; // 30
    
    cociente2=resto1/20;
    resto2=resto1%20;
    
    cociente3= resto2/10;
    resto3=resto2%10;
    
    cantidad= cociente1+ cociente2+cociente3;

// D.Salida
   printf("La cantidad de billetes%d",cantidad);
   printf("El vuelto es %d",resto3);
   
 return 0;
}
    
