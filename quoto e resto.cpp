#include<stdio.h>
 int main(){
 	//dichiarazione variabili
 	 int soldi;
 	 int prezzopasta;
 	 int resto;
 	 int quantitapasta;
 	 //calcoli
 	 
	  
	  printf("inserisci i soldi");
 	 scanf("%d",&soldi);
 	 printf("prezzopasta");
 	 scanf("%d",&prezzopasta);
	  
	  
	  quantitapasta=soldi/prezzopasta;
 	 resto=soldi-quantitapasta*prezzopasta;
 	 
 	 
 	 
 	 printf("quantitapasta= %d\n",quantitapasta);
 	 printf("resto= %d\n",resto);
 	 
 	 
 	 return 0;
 }
