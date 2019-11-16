#include<stdio.h>

int main(){
	char c[100];
	int i;
	
	for(i=33;i<134;i++){
		c[i]=i;
		printf(" %c\n",c[i]);
	}
}
