/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main()
{
	
	printf("|-------------------------------------------|\n");
	printf("|    Program Deret Bilangan Ganjil Genap    |\n");
	printf("|-------------------------------------------|\n\n");
	
	printf("Angka Ganjil\n");
	for(int ganjil = 1; ganjil <= 49; ganjil += 2)
	{
		printf("%i,", ganjil);
	}
		printf("\n\n");
		printf("Angka Genap\n");
	for(int genap = 2; genap <= 50; genap += 2)
	{
		printf("%i,", genap);
	}
	return 0;
}
