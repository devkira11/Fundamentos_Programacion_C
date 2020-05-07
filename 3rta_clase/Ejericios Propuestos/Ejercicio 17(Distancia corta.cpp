//1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>

int main() {
// D.Entrada 
   //Declaracionx
   int  x1,x2,y1,y2,x3,y3,x,y ;
   double punto1,punto2,punto3,punto4,punto5,punto6,distanciaA,distanciaB,distanciaC,dmin;
   //Lectura
   printf("Usurio ingreseme los puntos( x1 , y1 , x2 , y2, x3 , y3 , x , y )");
   scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x,&y);
	 // Procesamiento ;
   punto1 = (x-x1); 
   punto2 = (y-y1);
   
   punto3 = (x-x2);
   punto4 = (y-y2);
   
   punto5 = (x-x3);
   punto6 = (y-y3);
   distanciaA = sqrt(pow(punto1,2)+pow(punto2,2));
   distanciaB = sqrt(pow(punto3,2)+pow(punto4,2));
   distanciaC = sqrt(pow(punto5,2)+pow(punto6,2));
 // D.Salida
   if(distanciaA<distanciaB){
   	    if(distanciaA<distanciaC){
   	    	dmin=distanciaA;
		}
	    else{
			dmin=distanciaC;
		}
   }
   else{ 
        if(distanciaB<distanciaC){
        	dmin=distanciaB;
		}
		else{
			dmin=distanciaC;
		}
   }
  printf("La dmin de los tres puntos es %lf", dmin);
 
   
   
 
 return 0;
}
