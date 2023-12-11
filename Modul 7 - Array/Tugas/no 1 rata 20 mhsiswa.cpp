/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main(){
	float nilai[20], rata_rata;
	int jumlahMahasiswa=20;
	
	printf("|-----------------------------------------------|\n");
	printf("|Program Menghitung Nilai Rata-Rata 20 Mahasiswa|\n");
	printf("|-----------------------------------------------|\n\n");
	
	for(int i=0 ; i < jumlahMahasiswa ; i++)
	{
		printf("Masukkan nilai mahasiswa ke-%d : ", i+1);
		scanf("%f", &nilai[i]);
	}
	
	int length = sizeof(nilai)/sizeof(*nilai);
	for(int i=0 ; i<length ; i++)
	{
		rata_rata =+ nilai[i];
	}
	printf("\nNilai rata-rata dari 20 mahasiswa adalah %f", rata_rata/20);
	
	return 0;
}
