/*	oggetto:generatore pseudo-casuale 
			di numeri che calcola la media
			trova il valore massimo e minimo
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=5;
	int num[n];
	int i;
	int somma=0;
	float media;
	int Vmax; //valore massimo
	int Vmin; //valore basso
	int j; // range
	
	printf("range: ");
	scanf("%d",&j);
		
	for(i=0;i<n;i++){
		num[i]=rand()%j;
	    printf("%d ",num[i]);
		somma=somma+num[i];	
	}
	
	Vmax=num[0];
	Vmin=num[0];
	
	for(i=0;i<n;i++){
		if(Vmax<num[i]){
			Vmax=num[i];
		}	
		if(Vmin>num[i]){
			Vmin=num[i];
			}
	}
	media=somma/n;
	printf("\nmedia: %f\n",media);
	printf("valore massimo: %d\n",Vmax);
	printf("valore minimo: %d\n",Vmin);		
}
