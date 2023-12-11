/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
kasus program	: program rental film
*/

#include <stdio.h>

int main(){
	
	int jam, tarif, total;
	
	printf("Masukkan jumlah jam menonton = ");
	scanf("%d", &jam);
	
	if (jam <= 0){
		printf("angka tidak valid\n");
		return 0;
	}
	
	tarif= 15000;
	if (jam > 1){
		tarif += (jam - 1) * 7500;
	}
	
	total = tarif;
	
	printf("Total tarif yang harus dibayar adalah Rp.%.2d", total);
	
	return 0;
}
