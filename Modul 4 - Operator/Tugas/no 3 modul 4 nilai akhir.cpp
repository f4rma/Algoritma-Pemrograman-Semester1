/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
kasus program	: menghitung nilai akhir
*/

#include <stdio.h>

int main()
{
	//Deklarasi variabel
	float presensi, praktek, uts, uas, akhir;
	
	//input nilai
	printf("Nilai Presensi = ");
	scanf("%f", &presensi);
	
	printf("Nilai Praktek = ");
	scanf("%f", &praktek);
	
	printf("Nilai UTS = ");
	scanf("%f", &uts);
	
	printf("Nilai UAS = ");
	scanf("%f", &uas);
	
	//validasi input
	//logika OR || 
	if(presensi < 0 || presensi > 100 || praktek < 0 || praktek > 100 || uts < 0 || uts > 100 || uas < 0 || uas > 100){
	printf("Nilai tidak valid\n");
	return 0;
	}else{
		printf("\n================================\n");
		akhir= 0.1 * presensi + 0.2 * praktek + 0.3 * uts + 0.4 * uas;
		printf("Nilai Akhir = %.2f", akhir);
	}

	return 0;
	
	
	
}
