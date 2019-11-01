#include<stdio.h>
#include<stdlib.h>

int main(){
	int num[20];
	float n=20;
	int i;
	int somma=0;
	float media;
	int Vmax = 0; //valore massimo
	int Vmin = 0; //valore minimo
		
	for(i=0;i<n;i++){
		num[i]=rand()%21;
	    printf("%d ",num[i]);
		somma=somma+num[i];
		if(Vmax<num[i]){
			Vmax=num[i];
		}	
		if(Vmin>num[i]){
			Vmin=num[i];
		}
	}
	media=somma/n;
	printf("\nmedia: %f\n", media);
	printf("valore massimo: %d\n",Vmax);
	printf("valore minimo: %d\n",Vmin);	
}
