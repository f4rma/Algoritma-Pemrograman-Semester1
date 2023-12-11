/*
Created by : Raditya Putra Farma
NIM : 23343050
soal: Buatlah program yang menggunakan fungsi 
untuk perhitungan aritmetik yaitu penjumlahan, 
pengurangan, perkalian dan pembagian.
*/

#include <stdio.h>

int tambah (int a, int b){
	return a + b;
}

int kurang (int a, int b){
	return a - b;
}

int kali (int a, int b){
	return a * b;
}

float bagi (int a, int b){
	return a / b;
}

int main(){
	int a, b;
	
	printf("Masukkan dua bilangan: ");
	scanf("%d %d", &a, &b);
	
	printf("penjumlahan	: %d + %d = %d\n", a, b, tambah(a,b));
	printf("pengurangan	: %d - %d = %d\n", a, b, kurang(a,b));
	printf("perkalian	: %d x %d = %d\n", a, b, kali(a,b));
	printf("pembagian	: %d / %d = %.2f\n", a, b, bagi(a,b));
	
	return 0;
}
