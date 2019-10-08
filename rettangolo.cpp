


#include<stdio.h>
int main(){
	//dichiarazione variabili
	int base;
	int altezza;
	int area;
	int perimetro;
	
	
	printf("inserisci la base");
	scanf("%d",&base);
	printf("inserisci l'altezza");
	scanf("%d",&altezza);
	//calcoli
	area=base*altezza;
	perimetro=(base+altezza)*2;
	
	printf("l'area del rettangolo è %d\n",area);
	printf("il perimetro del rettangolo è %d\n",perimetro);
	
	return 0;
}
