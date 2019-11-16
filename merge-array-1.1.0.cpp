/*
	oggetto:merging two arrays in a third array
			and then sort them in increasing order
			versione:1.1.0
*/



#include<stdio.h>
#define n 5
int main(){
	int i=0,j=0,k=0;
	int a[n]={5,7,10,15,21};
	int b[n]={3,4,9,18,23};
	int z[n+n];
	
	while(i<n && j<n){
		if(a[i]<b[j]){
			z[k]=a[i];
			printf("%d ",z[k]);
			i++;
			k++;
		}else{
			z[k]=b[j];
			printf("%d ",z[k]);
			j++;
			k++;
		}
	}
	
	while(i<n){
		z[k]=a[i];
			printf("%d ",z[k]);
			i++;
			k++;
	}
	
	while(j<n){
		z[k]=b[j];
			printf("%d ",z[k]);
			j++;
			k++;
	}
	
}
