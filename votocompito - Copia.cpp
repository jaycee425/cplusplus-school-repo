/*
scrivere un programma che legge 10 voti(espressi da 1 a 5)
il programma dovrà validare i dati in ingresso.
il programma stamperà la media, il valore più basso 
*/

#include<stdio.h>

int main(){
	int n=10;
	float voto[10];
	float media;
	int i;
	float somma=0;
	
	for(i=0;i<n;i=i+1){
		do{
			printf("inserisci %d o voto: ",i+1);
			scanf("%f",&voto[i]);	
		}while(voto[i]<1 || voto[i]>5); 
		somma=somma+voto[i];		
	}
	
	for(i=0;i<n;i=i+1){
		printf("%f\n",voto[i]);
		
		while(voto[i] < v_i){
			voto[i] = voto[i] + v_i;
			v_i = voto[i] - v_i;
			voto[i] = voto[i] - v_i; 
	}
			
	media=somma/n;
	printf("la media e' %f\n",media);
	printf("Il valore infimo e': %d", v_i)
	
}
