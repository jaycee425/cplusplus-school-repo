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
	int cont=0;
	
	do{
			if(cont==0){
				printf("inserisci il voto %d:",i);
				scanf("%f",&voto[i]);
			}
			if(cont>0){
				printf("reinserisci il voto:",i);
				scanf("%f",&voto[i]);
			}
			cont=cont+1;
			if(voto[i]>=1 && voto[i]<=5){
				cont=cont-1;
			}		
		}while(voto[i]>=1 && voto[i]<=5);

