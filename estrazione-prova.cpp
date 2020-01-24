#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
 
#define N 50
 
int main() {
 	int a[N];
 	int i, j;
 	srand(time(0)); //inizializza il generatore sull'ora attuale dell'elaboratore time(0)
  
 	for(i=0;i<N;i++) {
    	     a[i]=rand()%100+1;
    	     for(j=0;j<i;j++) {
       		if(a[i]==a[j]) {
            	   i--;
            	   break;
            }
         }
       }
  
 	for(i=0;i<N;i++)
    	     printf("%d ", a[i]);
   
 	return 0;
}
