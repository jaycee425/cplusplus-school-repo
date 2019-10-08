#include<stdio.h>
int main(){
	//dichiarazione variabili
	int base; 
	int altezza;
	int ipotenusa;
	int area;
	int perimetro;
	
	
	printf("inserisci base");
	scanf("%d",&base);
	printf("inserisci altezza");
	scanf("%d",&altezza);
	printf("inserisci ipotenusa");
	scanf("%D,",&ipotenusa);
	//calcoli
	
	
	area=base*altezza/2;
	perimetro=base+ipotenusa+altezza;
	 
	 printf("area=");
	 printf("%d",area);
	 
	 printf("\nperimetro=");
	 printf("%d",perimetro);
	 
	
	
	
	
	return 0;	
}
