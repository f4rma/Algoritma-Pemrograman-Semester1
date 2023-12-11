/*
Created by : Raditya Putra Farma
NIM : 23343050
soal: Buatlah program untuk menghitung besarnya diskon yang diberikan 
atas besarnya jumlah pembelian, dengan ketentuan:
a. Jika belanja dibawah 1 jt, maka tidak mendapatkan diskon
b. Jika belanja diatas 1 jt dan dibawah 3 jt, maka mendapat diskon 20%
c. Jika belanja diatas 3 jt, maka mendapat diskon 35%
*/
#include <stdio.h>

float potong(float total){
	float diskon;
	
	if (total < 1000000)
	{
		diskon = 0;
	}
	else if (total >= 1000000 && total < 3000000)
	{
		diskon = 0.2 * total;
	}
	else
	{
		diskon = 0.35 * total;
	}
	return diskon; //untuk mengembalikan nilai diskon yang telah dihitung ke fungsi utama
}

int main(){
	float total, bayar, diskon;
	
	printf("Total Pembelian : Rp. ");
	scanf("%f", &total);
	
	diskon = potong(total); //panggil fungsi diskon
	bayar = total - diskon;
	
	printf("Besar Diskon			: %.2f \n", diskon);
	printf("Besar yang harus dibayar	: %.2f \n", bayar);
	
	return 0;
}
