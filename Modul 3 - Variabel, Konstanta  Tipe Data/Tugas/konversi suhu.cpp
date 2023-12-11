/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>
int main(){
	printf("\n Mengkonversi suhu dengan inputan data\n");
	printf("\n----------------------------------------------\n");
	
	double k, f, r, c;
	
	printf("Input suhu celcius: ");
	scanf("%lf", &c);
	
	k = c + 273.15;
	f = (c * 1.8)+32;
	r = c * 0.8;
	
	printf("Suhu dalam kelvin= %lf K\n", k);
	printf("Suhu dalam fahreinheit= %lf F\n", f);
	printf("Suhu dalam reamur= %lf R\n", r);
	
	return 0;
}
