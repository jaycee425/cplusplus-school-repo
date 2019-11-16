#include<math.h>
#include<stdio.h>

int main(){
	//dichiarazione variabili
	float lato1,lato2,lato3; //lati del triangolo
	float area;
	float perimetro;
	float semiperimetro;
	
	printf("inserisci lato1\n");
	scanf("%f",&lato1);
	printf("inserisci lato2\n");
	scanf("%f",&lato2);
	printf("inserisci lato3\n");
	scanf("%f,",&lato3);
	//calcoli
	
	perimetro=lato1+lato2+lato3;
	semiperimetro=perimetro/2;
	area=sqrt(semiperimetro*(semiperimetro-lato1)*(semiperimetro-lato2)*(semiperimetro-lato3));
	
	 printf("\nperimetro=");
	 printf("%f",perimetro);
	 
	 printf("\narea=");
	 printf("%f",area);
	 
	 
	
	
	
	return 0;
	
	
	
	
	
	
}
