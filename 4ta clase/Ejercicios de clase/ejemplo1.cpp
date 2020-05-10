//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
  
	int nota = 14;
		
   //NOta 17  -20 : AD
   //NOta 13  -17 : A
   //NOta 10  -13 : B
   //NOta 0  -10 : C
   
   if(nota>17 && nota <=20) {
   	  printf("Tu nota es AD");
   }
   else{
   	   if(nota>13 && nota <17){
   	  		printf("Tu nota es A");
	   } 
	   else{
	   		if(nota > 9 && nota < 13){
	   			printf("Tu nota es B");
			}
	   		else {
	   			 printf("Tu nota es C");
			}
	   }
   }
   
   if(nota>17 && nota <=20) {
   		printf("Tu nota es AD");
   }
    if(nota>13 && nota <=17) {
   		printf("Tu nota es AD");
   } 
    if(nota>10 && nota <=13) {
   		printf("Tu nota es AD");
   } 
    if(nota>0 && nota <10) {
   		printf("Tu nota es AD");
   }
   
   
   			 
  
   
 
   
   
 
 return 0;
}
