
#include <stdio.h>

int main()
{
	printf("Created by : Raditya Putra Farma\n");
	printf("NIM : 23343050\n\n");
	
float alas, tinggi, luas;

printf("masukkan nilai alas (cm): ");
scanf("%f", &alas);

printf("masukkan nilai tinggi (cm): ");
scanf("%f", &tinggi);

luas= 0.5*alas*tinggi;

printf("luas segitiga adalah %.2f cm^2\n ", luas);

return 0;
	
	
}
