/*
	nome: Julian Bandril
	luogo: casa legnano(MI)
	oggetto: costruire un programma per la gestione di prenotazioni di un'auto in carsharing
	Ogni appuntamento riporta i seguenti dati: email del cliente, data, l'ora di inizio e l'ora di consegna, annullata, consegnata. Realizzare:
		- un menu testuale che mostri le scelte: visualizza tutte le prenotazioni, inserisci una nuova prenotazione, visualizza tutte le prenotazioni di un dato giorno.
		- la funzione che visualizza tutte le prenotazioni
		- la funzione che inserisce una nuova prenotazione
		- la funzione che visualizza le prenotazioni, durate e costi di un dato utente
		- la funzione che visualizza il file con un ordine scelto a piacere
		versione: 2.0.0;
*/	

//nota: costo = 20 centesimi al minuto,aggiunta di un'altra funzione per il riordinamento;	

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int day;
	int month;
	int year;
}date;

typedef struct{
	int hr;
	int min;
}time;

typedef struct{
	char userName[100];
	date date;
	time start;	
	time delivery;
	int canceled;
	int delivered;
}reservation;

char fileName[100] = "booking.txt";

void viewReservation(){
	FILE *f;
	reservation car;
	// variabili di appoggio per intestazione 
	char email[100];
	char date[100];
	char start[100];
	char finish[100];
	char canceled[100];
	char delivered[100];
	
	f=fopen(fileName,"r");
	
	if(!f){
		printf("file doesn't exist");
	}else{
		
		fgets(email,100,f);
		email[strlen(email)-1] = '\0';
		fgets(date,100,f);
		date[strlen(date)-1] = '\0';
		fgets(start,100,f);
		start[strlen(start)-1] = '\0';
		fgets(finish,100,f);
		finish[strlen(finish)-1] = '\0';
		fgets(canceled,100,f);
		canceled[strlen(canceled)-1] = '\0';
		fgets(delivered,100,f);
		delivered[strlen(delivered)-1] = '\0';
		
		printf("%-20s\t%s\t\t%s\t%s\t%10s\t%10s\n",email,date,start,finish,canceled,delivered);
		
		fgets(car.userName,100,f);
		while(!feof(f)){ 
		
			fscanf(f,"%d / %d / %d\n",&car.date.day,&car.date.month,&car.date.year);
			
			fscanf(f,"%d : %d\n",&car.start.hr,&car.start.min);
			fscanf(f,"%d : %d\n",&car.delivery.hr,&car.delivery.min);
			fscanf(f,"%d\n",&car.canceled);
			fscanf(f,"%d\n",&car.delivered);
			
			car.userName[strlen(car.userName)-1] = '\0';
			
			printf("\n%-20s",car.userName);
			printf("\t%02d/%02d/%4d",car.date.day,car.date.month,car.date.year);
			printf("\t%2d:%02d",car.start.hr,car.start.min);
			printf("\t%02d:%02d",car.delivery.hr,car.delivery.min);
			printf("\t%10d",car.canceled);
			printf("\t%10d",car.delivered);
			printf("\n");
			
			fgets(car.userName,100,f);
		}
		fclose(f);
	}
}

void inputReservation(reservation car){
	FILE *f;
	//variabili di lavoro
	int v=0; // memoria validazione;
	int rightMonth[7]={1,3,5,7,8,10,12};
	int i;
	int right=0; //valida se è giusto il mese;
	
	
	f=fopen(fileName,"a");	
	
	printf("enter Email:\n");
	scanf("%s",car.userName);
	
	do{
		if(v==0){
			printf("enter day:\n");
			scanf("%d",&car.date.day);	
		}else{
			printf("days are between 1 and 31: ");
			scanf("%d",&car.date.day);
		}
		v++;
	}while(car.date.day<=0 || car.date.day>31);
	
	v=0;
	
	if(car.date.day == 31){
		do{
			if(v==0){
				printf("enter month:\n");
				scanf("%d",&car.date.month);
			}else{
				printf("enter month: 1 3 5 7 8 10 12\n");
				scanf("%d",&car.date.month);	
			}
		
			for(i=0;i<7;i++){
				if(car.date.month == rightMonth[i]){
					right=1;
					break;
				}
			}
			v++;
		}while(right == 0);
	}else{
		if(car.date.day == 30){
			do{
				if(v==0){
					printf("enter month:\n");
					scanf("%d",&car.date.month);
				}else{
					printf("enter month that is not 2:\n");
					scanf("%d",&car.date.month);
				}
				v++;
			}while(car.date.month == 2);
		}else{
			do{	
				printf("enter month:\n");
				scanf("%d",&car.date.month);
			}while(car.date.month<=0 || car.date.month>12);
		}
	}
	do{
		printf("enter year:\n");
		scanf("%d",&car.date.year); 	
	}while(car.date.year<2000);
	
	
	printf("enter start time hour:\n");
	scanf("%d",&car.start.hr);
	printf("enter start time minutes:\n");
	scanf("%d",&car.start.min);
	
	printf("enter delivery time hour:\n");
	scanf("%d",&car.delivery.hr);
	printf("enter delivery time minutes:\n");
	scanf("%d",&car.delivery.min);
	
	car.canceled = 0;
	car.delivered = 0;
	
	fprintf(f,"%s\n",car.userName);
	fprintf(f,"%02d / %02d / %4d\n",car.date.day,car.date.month,car.date.year);
	fprintf(f,"%02d : %02d\n",car.start.hr,car.start.min);
	fprintf(f,"%02d : %02d\n",car.delivery.hr,car.delivery.min);
	fprintf(f,"%d\n",car.canceled);
	fprintf(f,"%d\n",car.delivered);
	fclose(f);
}

void findResByDate(reservation car,int day,int month,int year){
	FILE *f;
	// variabile di appoggio per intestazione 
	char line[100];
	int count=0;
	
	f=fopen(fileName,"r");
	
	if(!f){
		printf("file doesn't exist\n");
	}else{
		
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
	
		fgets(car.userName,100,f);
		while(!feof(f)){ 
		
			fscanf(f,"%d / %d / %d\n",&car.date.day,&car.date.month,&car.date.year);
			
			fscanf(f,"%d : %d\n",&car.start.hr,&car.start.min);
			fscanf(f,"%d : %d\n",&car.delivery.hr,&car.delivery.min);
			
			fscanf(f,"%d\n",&car.canceled);
			fscanf(f,"%d\n",&car.delivered);
			
			car.userName[strlen(car.userName)-1] = '\0';
			
			if(car.date.day == day && car.date.month == month && car.date.year == year){
				printf("\nrecord:%d\n",count+1);
				printf("\n%-20s",car.userName);
				printf("\t%02d/%02d/%4d",car.date.day,car.date.month,car.date.year);
				printf("\t%2d:%02d",car.start.hr,car.start.min);
				printf("\t%2d:%02d",car.delivery.hr,car.delivery.min);
				printf("\t%10d",car.canceled);
				printf("\t%10d",car.delivered);	
				printf("\n");
				count++;
			}
			
			fgets(car.userName,100,f);
		}
		
		if(count == 0){
			printf("\nnot found\n");
		}
		fclose(f);
	}
}


int resTime(reservation car){
	int minStart,minFinish,minTot;
	
	if(car.delivery.hr < car.start.hr){
		minFinish = ((car.delivery.hr + 24) * 60) + car.delivery.min; // conversione minuti 
		minStart = 	minStart = (car.start.hr*60) + car.start.min;
	}else{
		minStart = 	minStart = (car.start.hr*60) + car.start.min;
		minFinish = (car.delivery.hr*60) + car.delivery.min;
	}
	
	minTot = minFinish - minStart;
	
	return minTot;
}

float resCost(reservation car){
	float time;
	float costTot;
	float cost_min=0.20;
	
	time = resTime(car);
	
	costTot = cost_min * time;
	
	return costTot;
}

void findResByUser(char user[],reservation car){
	FILE *f;
	char line[100];
	float cost=0; 
	int time;
	int count=0;
	
	f=fopen(fileName,"r");
	
	if(!f){
		printf("file doesn't exist\n");
	}else{
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		
		fgets(car.userName,100,f);
		while(!feof(f)){
			
			fscanf(f,"%d / %d / %d\n",&car.date.day,&car.date.month,&car.date.year);
			fscanf(f,"%d : %d\n",&car.start.hr,&car.start.min);
			fscanf(f,"%d : %d\n",&car.delivery.hr,&car.delivery.min);	
			fscanf(f,"%d\n",&car.canceled);
			fscanf(f,"%d\n",&car.delivered);
			
			car.userName[strlen(car.userName)-1] = '\0';
			
			if(strcmp(car.userName,user)==0){
				time=resTime(car);
				cost=resCost(car);
				
				printf("\nrecord:%d\n",count+1);
				printf("\n%-20s",car.userName);
				printf("\t%02d/%02d/%4d",car.date.day,car.date.month,car.date.year);
				printf("\t%2d:%02d",car.start.hr,car.start.min);
				printf("\t%2d:%02d",car.delivery.hr,car.delivery.min);
				printf("\t%10d",car.canceled);
				printf("\t%10d\n",car.delivered);	
				
				printf("%d minuti\n",time);
				printf("%.2f euro\n",cost);
				printf("\n");
				count++;
			}
			
			fgets(car.userName,100,f);
		}
		fclose(f);
	}
}


int countRecords(){
	int count=0;
	char line[100];
	FILE *f;
	
	f=fopen(fileName,"r");
	
	if(!f){
		return 0;
	}else{
		fgets(line,100,f);
		while(!feof(f)){
			count++;
			fgets(line,100,f);
		}
		count=(count/6)-1;	
	}
	fclose(f);
	return count;
}

void uploadArray(reservation carSharing[],int n){
	FILE *f;
	reservation car; 
	char line[100];
	int i;
	f=fopen(fileName,"r");
	
	if(!f){
		printf("cannot upload file in array\n");
	}else{
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		fgets(line,100,f);
		
		for(i=0;i<n;i++){
			//acquisizione
			fgets(car.userName,100,f);
			fscanf(f,"%d / %d / %d",&car.date.day,&car.date.month,&car.date.year);
			fscanf(f,"%d : %d",&car.start.hr,&car.start.min);
			fscanf(f,"%d : %d\n",&car.delivery.hr,&car.delivery.min);
			fscanf(f,"%d\n",&car.canceled);
			fscanf(f,"%d\n",&car.delivered);
			
			car.userName[strlen(car.userName)-1] = '\0';
			// trasferimento
			strcpy(carSharing[i].userName,car.userName);
			
			carSharing[i].date.day = car.date.day;
			carSharing[i].date.month = car.date.month;
			carSharing[i].date.year = car.date.year;
			
			carSharing[i].start.hr = car.start.hr;
			carSharing[i].start.min = car.start.min;
			
			carSharing[i].delivery.hr = car.delivery.hr;
			carSharing[i].delivery.min = car.delivery.min;
			
			carSharing[i].canceled = car.canceled;
			carSharing[i].delivered = car.delivered;	
		}
	}
	fclose(f);
}

void alphaSortUser(reservation carSharing[],int n){
	// variabili di lavoro	
	int i,j;
	reservation temp;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(carSharing[i].userName,carSharing[j].userName) > 0  ){
				temp = carSharing[i];
				carSharing[i] = carSharing[j];
				carSharing[j] = temp;
			}
		}
	}
	
}

void temporalOrder(reservation carSharing[],int n){
	int i,j;
	reservation temp;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(carSharing[i].date.year > carSharing[j].date.year){
				temp = carSharing[i];
				carSharing[i] = carSharing[j];
				carSharing[j] = temp;
			}
			if(carSharing[i].date.year == carSharing[j].date.year){
				if(carSharing[i].date.month > carSharing[j].date.month){
					temp = carSharing[i];
					carSharing[i] = carSharing[j];
					carSharing[j] = temp;
				}
				if(carSharing[i].date.month == carSharing[j].date.month){
					if(carSharing[i].date.day > carSharing[j].date.day){
						temp = carSharing[i];
						carSharing[i] = carSharing[j];
						carSharing[j] = temp;
					}
				}
			}
			
		}
	}
}

void visualizeArray(reservation carSharing[],int n){
	int i;
		printf("Email\t\t\tdate\t\tstart\tfinish\tcanceled\tdelivered\n");
	for(i=0;i<n;i++){
		printf("\n%-20s",carSharing[i].userName);
		printf("\t%02d/%02d/%4d",carSharing[i].date.day,carSharing[i].date.month,carSharing[i].date.year);
		printf("\t%2d:%02d",carSharing[i].start.hr,carSharing[i].start.min);
		printf("\t%2d:%02d",carSharing[i].delivery.hr,carSharing[i].delivery.min);	
		printf("\t%10d",carSharing[i].canceled);
		printf("\t%10d\n",carSharing[i].delivered);
	}
}

void sortReservation(){
	int opt;
	int n;
	n = countRecords();
	reservation carSharing[n]; 
	 
	uploadArray(carSharing,n);
	printf("1:sort alphabetically users\n");
	printf("2:sort date in temporal order\n");
	printf("choose: ");
	scanf("%d",&opt);
	
	switch(opt){
		case 1:
			alphaSortUser(carSharing,n);
			break;
		case 2:
			temporalOrder(carSharing,n);
			break;
		default:
			printf("error option\n");	
	}
	
	visualizeArray(carSharing,n);
}

int searchIndexEmail(reservation cars[],int n){
	int i;
	char email[100]; // email del client che si vuole trovare
	
	printf("\nEnter email:\n");
	scanf("%s",email);
	
	for(i=0;i<n;i++){
		if(strcmp(email,cars[i].userName) == 0){
			return i;
		}
	}
}

void modArray(reservation cars[],int n,int i){
	int opt;
	int tmp;
	
	printf("\n1:delivered\n");
	printf("2:canceled\n");
	printf("what field do you want to change?:");
	scanf("%d",&opt);
	
	switch(opt){
		case 1:
			if(cars[i].canceled == 0){
				do{
					printf("delivered?: ");
					scanf("%d",&tmp);	
				}while(tmp>0 && tmp<1);
			cars[i].delivered = tmp;
			}
			break;
		case 2:
			if(cars[i].delivered == 0){
				do{
					printf("canceled?:");
					scanf("%d",tmp);	
				}while(tmp>0 && tmp<1);
				cars[i].canceled = tmp;
			}	
			break;
		default:
			printf("error option\n");
	}
}

void saveArray(reservation cars[],int n){
	int i;
	FILE *f;
	f = fopen(fileName,"w");
	fprintf(f,"email\ndate\nstart\nfinish\ncanceled\ndelivered\n");
	for(i=0;i<n;i++){
		fprintf(f,"%s\n",cars[i].userName);
		fprintf(f,"%02d / %02d / %4d\n",cars[i].date.day,cars[i].date.month,cars[i].date.year);
		fprintf(f,"%02d : %02d\n",cars[i].start.hr,cars[i].start.min);
		fprintf(f,"%02d : %02d\n",cars[i].delivery.hr,cars[i].delivery.min);
		fprintf(f,"%d\n",cars[i].canceled);
		fprintf(f,"%d\n",cars[i].delivered);
	}
	fclose(f);
}

void  modFile(){
	int m;
	int n = countRecords();
	reservation carSharing[n];
	
	uploadArray(carSharing,n); // copia i record dal file nell'array
	m = searchIndexEmail(carSharing,n);
	modArray(carSharing,n,m); // modifica qualcosa del record m-esimo
	visualizeArray(carSharing,n); // visualizza l'array di record
	saveArray(carSharing,n); // salva l'array nello stesso file
}

int main(){
	int opt;
	reservation car;
	//variabili funzione ricerca per data.
	int chosenDay;
	int chosenMonth;
	int chosenYear;
	// variabili di lavoro per la validazione della data
	int v=0;
	int rightMonth[7]={1,3,5,7,8,10,12}; // mesi con 31 giorni
	int right=0; // vede se l'input del mese fa parte dell'array rightMonth;
	int i;
	char user[100]; // utente che si vuole ricercare
	int count=0;
	do{
		printf("\nmenu\n");
		printf("0:esci\n");
		printf("1:view all reservations\n");
		printf("2:enter new reservation\n");
		printf("3:view all reservations for a given day\n");
		printf("4:view all reservations with times and costs of a given user\n");
		printf("5:sort reservation according to Email/username\n");
		printf("6:count reservation\n");
		printf("7:modify reservation\n");
		printf("choose: ");
		scanf("%d",&opt);
		printf("\n");
		
		switch(opt){
			case 0:break;
			case 1:
				viewReservation();
				break;
			case 2:
				inputReservation(car);
				break;
			case 3:
				do{
					if(v == 0){
						printf("find reservations of a given day: ");
						scanf("%d",&chosenDay);	
					}else{
						printf("find reservations of a given day: 1 to 31 ");
						scanf("%d",&chosenDay);
					}
					v++;
				}while(chosenDay<=0 || chosenDay>31);
				
				v=0;
				
				if(chosenDay == 31){
					do{
						if(v==0){
							printf("find month: ");
							scanf("%d",&chosenMonth);
						}else{
							printf("enter month: 1 3 5 7 8 10 12\n");
							scanf("%d",&chosenMonth);	
						}
		
						for(i=0;i<7;i++){
							if(chosenMonth == rightMonth[i]){
								right=1;
								break;
							}	
						}
						v++;
					}while(right == 0);
				}else{
					if(chosenDay == 30){
						do{
							if(v==0){
								printf("find month: ");
								scanf("%d",&chosenMonth);
							}else{
								printf("enter month that is not 2:\n");
								printf("find month: ");
								scanf("%d",&chosenMonth);
							}
							v++;
						}while(chosenMonth == 2);
					}else{
						do{
							printf("find month: ");
							scanf("%d",&chosenMonth);
						}while(chosenMonth<=0 || chosenMonth>12);
						
					}
				}
				
				v=0;
		
				do{
					if(v==0){
						printf("find year: ");
						scanf("%d",&chosenYear);
					}else{
						printf("find year > 2000 :  ");
						scanf("%d",&chosenYear);
					}
				}while(chosenYear<2000);
					
				findResByDate(car,chosenDay,chosenMonth,chosenYear); // funzione
				
				break;
			case 4:
				printf("enter a username:\n");
				scanf("%s",user);
				
				findResByUser(user,car);
				break;
			case 5:
				sortReservation();
				break;
			case 6:
				count = countRecords();
				printf("%d\n",count);
				break;
			case 7:
				modFile();
				break;
			default:
				printf("option error\n");
		}
	}while(opt!=0);
}
