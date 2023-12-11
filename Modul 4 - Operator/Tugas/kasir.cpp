/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
kasus program	: program kasir barang
*/
#include <stdio.h>

int main()
{
	char nmPembeli[50], nmBarang[50];
	int jmlhBarang, hrgBarang;
	float hrgTotal;
	
	printf("Program Kasir Barang\n");
	printf("==============================================\n");
	
	printf("Nama Pembeli= ");
	scanf("%[^\n]s", &nmPembeli);
	
	printf("Nama Barang= ");
	scanf("%s", &nmBarang);
	
	printf("Harga Barang= ");
	scanf("%i", &hrgBarang);
	
	printf("Jumlah Barang= ");
	scanf("%i", &jmlhBarang);
	
	if(jmlhBarang <= 0){
		printf("jumlah barang tidak valid\n");
		return 0;
	}
	
	hrgTotal = hrgBarang * jmlhBarang;
	
	printf("\n");
	printf("Selamat Datang %s\n", nmPembeli);
	printf("===============================================\n");
	
	printf("\t	Daftar Belanjaan\n");
	printf("Barang \t\t Harga \t\t Jumlah\n");
	printf("%s \t Rp %i \t %i pcs", nmBarang, hrgBarang, jmlhBarang);
	
	
	printf("\n=============================================\n");
	printf("\nTotal Belanja= Rp %0.2f", hrgTotal);
	
	printf("\n\n \t\t\t Terimakasih :)");
	
	return 0;
		
	

}
