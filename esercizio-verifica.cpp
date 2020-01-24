#include<stdio.h>

int main(){
	int n=4;
	int v[n];
	int i,j;
	int contnum;
	int pv;
	int temp;
	
	for(i=0;i<n;i++){
		pv=1;
		do{
			if(pv==1){
				printf("inserisci un numero: ");
				scanf("%d",&v[i]);
			}else{
				printf("errore inserisci un numero da 0 a 50: ");
				scanf("%d",&v[i]);
			}
			pv=0;
		}while(v[i]<0 || v[i]>50);
	}
	
	for(i=0;i<n;i++){
		if(v[j]!=0){
			for(j=0;j<n;j++){
				if(v[i]==v[j]){
					contnum++;
					v[j]=2;
			}
			printf("il numero %d e'stato ripetuto %d volte",v[i],contnum);
		}	
	}
		contnum=0;		
	}
	
	
}
