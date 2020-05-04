/*
	autore:Julian Bandril
	oggetto:visualizzare le temperature inserite dall'utente 
			la media aritmetica delle stesse
	data:23/10/2019
	classe 3E
*/
#include<stdio.h>

int main(){
	int n=3;
	float temp[31];
	int i;
	float media;
	float somma=0;
	
for(i=0;i<n;i=i+1){
	printf("inserisci la temperatura %d : ",i);
	scanf("%f",&temp[i]);	
	somma=somma+temp[i];
}

for(i=0;i<n;i=i+1){
	printf("%f\n",temp[i]);
}

media=somma/n;
printf("%f\n",media);
}


