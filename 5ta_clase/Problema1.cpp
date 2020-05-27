//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
   //Declaracionx
   char  cod    ;
  
   
   
   printf("Ingrese el codigo del aminoacido");
   scanf(" %c",&cod);
   switch(cod){
   	 case 'D':
   	 case 'E':
			printf("El aminoacido es negativo");
			break ;
	 case 'A':	
	 case 'G':	
     case 'S':
	         printf("El aminoacido es pequeño");
			 break;
	 case 'F':	
	 case 'W':	
     case 'Y':
     case 'H':
	          printf("El aminoacido es aromatico");
			 break;
	case 'I':
    case 'L':	
	case 'V':	
    case 'M':
   	case 'K':
    case 'R':	
	case 'N':	
    case 'Q':
   	case 'P':
    case 'T':	
			 printf("El aminoacido es otro");
			 break;
	default:
		printf("Error");
   	
   	
   	
   }
   
  
 
  
  
   
   
 
 return 0;
}
