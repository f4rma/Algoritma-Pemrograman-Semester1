/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main()
{
	double a, b, hasil;
	char pilihan;
	
	printf("Nama Programmer : Raditya Putra Farma\n");
	printf("NIM : 23343050\n");
	
	printf("|------------------------------------|\n");
	printf("|    Program Kalkulator Sederhana    |\n");
	printf("|------------------------------------|\n");
    printf("Pilih operasi yang ingin dilakukan:\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");
    printf("Masukkan pilihan Anda: ");
    scanf(" %c", &pilihan);
    
    printf("Masukkan nilai pertama: ");
    scanf("%lf", &a);
    printf("Masukkan nilai kedua: ");
    scanf("%lf", &b);
    
    switch(pilihan)
    {
    	case 'a':
    		hasil = a + b;
    		printf(" %.2lf + %.2lf = %.2lf", a, b, hasil);
    		break;
    		
    	case 'b':
    		hasil = a - b;
    		printf(" %.2lf - %.2lf = %.2lf", a, b, hasil);
    		break;
    		
    	case 'c':
    		hasil = a * b;
    		printf(" %.2lf * %.2lf = %.2lf", a, b, hasil);
    		break;
    		
    	case 'd':
			if ( b == 0 )
			{
				printf("Tidak dapat membagi dengan nilai 0!");
			}	
			else
			{
				hasil = a / b;
				printf(" %.2lf / %.2lf = %.2lf", a, b, hasil);
			}
			break;
		case 'e':
			if ( b == 0 )
			{
				printf("Tidak dapat membagi dengan nilai 0!");
			}
			else
			{
				int c = (int) a;
				int d = (int) b;
				int sisa = c % d;
				printf(" %d %% %d = %d", c, d, sisa);
			}
			break;
			
			default:
				printf("Hasil tidak valid!\n");
	}
	return 0;
}















