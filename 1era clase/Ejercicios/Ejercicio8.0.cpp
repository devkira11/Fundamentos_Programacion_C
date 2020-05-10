 //1era parte : incluir librerias ? conjunto de paquetes de ayudas 
#include <stdio.h>
#include <math.h>


//LAS PALABRAS EN NEGRIDA NI SE TE OCURRA PONERLAS EN MAYUSCULA O CONFUNDIRTE ( ROJO EN LA GUIA ) SE LLAMAN PALABRAS RESERVADAS
int main() {
	
  int dd1=29, mm1=1;
  int dd2=7, mm2=4;
  int dias_de_diferencia;
  //2008
  //  
  dias_de_diferencia= fabs((dd1-dd2) + (mm1-mm2)*31);
  
  printf("Entre %02d / %02d y %02d/ %02d existen %d dias\n", dd1, mm1, dd2, mm2, dias_de_diferencia);
  return 0;
}
    
