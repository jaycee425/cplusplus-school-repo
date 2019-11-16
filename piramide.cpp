#include<stdio.h>
int main(){
	
	int n,j,i; //righe,colonne,contatore
	
	printf("quante righe vuoi nella tua piramide?: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n-1;j++){					//2*n-1 è il numero di colonne
			if(j>=n-(i-1) && j<=n+(i-1)){		//n-(i-1) n+(i-1) intervallo numero dove si stampa *
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
