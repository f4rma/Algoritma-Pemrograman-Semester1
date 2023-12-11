
#include <stdio.h>

int main()
{
	printf("Created by : Raditya Putra Farma\n");
	printf("NIM : 23343050\n\n");
	

float panjang, lebar, luas;

printf("masukkan nilai panjang(cm): ");
scanf("%f", &panjang);

printf("masukkan nilai lebar (cm): ");
scanf("%f", &lebar);

luas= panjang*lebar;

printf("luas persegi panjang adalah %.2f cm^2\n ", luas);

return 0;
	
	
}
