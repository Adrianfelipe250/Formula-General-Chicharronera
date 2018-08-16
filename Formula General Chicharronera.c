#include<stdio.h>
#include<math.h>

int main (){	
	printf("Programa para Resolver Ecuaciones de Segundo Grado de la Forma: ax^2+bx+c Usando la Formula General \n");
	printf("Introduce el Termino Cuadratico: ");
	float termino1 = 0;
	scanf("%f", &termino1);
	printf("Introduce el Termino lineal: ");
	float termino2 = 0;
	scanf("%f", &termino2);
	printf("Introduce el Termino Independiente: ");
	float termino3 = 0;
	scanf("%f", &termino3);
	float x1 ;
	float x2 ;
	float resultado1 = sqrt(termino2*termino2-(termino1*termino2*4));
       x1=((termino2*-1)+(resultado1))/(2*termino1);  
       x2=((termino2*-1)-(resultado1))/(2*termino1);
       printf ("\n El resultado de x1 es: %f",x1);
       printf ("\n El resultado de x2 es: %f",x2);
       return 0;
}
