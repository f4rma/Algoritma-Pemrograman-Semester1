/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main (){
	char ulangi = 'y';
	int counter = 0;
	
	//perulangan while
	while(ulangi == 'y'){
		printf("Apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf(" %c", &ulangi);
		//increment counter
		counter++;
	}
	printf("\n\n--------------\n");
	printf("Perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
	
	return 0;
}
