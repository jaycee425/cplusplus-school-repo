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
<<<<<<< HEAD
	int Vmax; //valore massimo
	int Vmin; //valore basso
	int j; // range
	
	printf("range: ");
	scanf("%d",&j);
=======
	int Vmax = 0; //valore massimo
	int Vmin = 0; //valore minimo
>>>>>>> 7c6147dbc3ecea3c498a8d7248170a3efc3e8d61
		
	for(i=0;i<n;i++){
		num[i]=rand()%j;
	    printf("%d ",num[i]);
<<<<<<< HEAD
		somma=somma+num[i];	
	}
	
	Vmax=num[0];
	Vmin=num[0];
	
	for(i=0;i<n;i++){
=======
		somma=somma+num[i];
>>>>>>> 7c6147dbc3ecea3c498a8d7248170a3efc3e8d61
		if(Vmax<num[i]){
			Vmax=num[i];
		}	
		if(Vmin>num[i]){
			Vmin=num[i];
<<<<<<< HEAD
			}
	}
	media=somma/n;
	printf("\nmedia: %f\n",media);
	printf("valore massimo: %d\n",Vmax);
	printf("valore minimo: %d\n",Vmin);		
=======
		}
	}
	media=somma/n;
	printf("\nmedia: %f\n", media);
	printf("valore massimo: %d\n",Vmax);
	printf("valore minimo: %d\n",Vmin);	
>>>>>>> 7c6147dbc3ecea3c498a8d7248170a3efc3e8d61
}
