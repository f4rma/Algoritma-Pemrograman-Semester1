/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main(){
	
	int jumlah_mahasiswa;
	
	printf("|--------------------------------|\n");
	printf("|Program Menginput Nama Mahasiswa|\n");
	printf("|--------------------------------|\n\n");


	printf("Masukkan jumlah mahasiswa: ");
	scanf("%d", &jumlah_mahasiswa);
	getchar();

	char nama[60][60];

	for(int i=0 ; i<jumlah_mahasiswa ; i++)
	{
	printf("Ketikkan nama mahasiswa ke-%d : ", i+1);
	gets(nama[i]);

	}
	printf("\n");
	for(int i=0 ; i<jumlah_mahasiswa ; i++)
	{
		printf("Nama Mahasiswa ke-%d : %s \n", i+1, nama[i]);
	}


	
return 0;
}


