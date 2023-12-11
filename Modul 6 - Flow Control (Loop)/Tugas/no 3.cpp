/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main()
{
    // Deklarasi variabel
    int i, j;
	printf("|----------------------------------|\n");
	printf("|    	Program Piramida Angka 	   |\n");
	printf("|----------------------------------|\n\n");

    // Perulangan untuk baris
    for (i = 1; i <= 5; i++)
    {
        // Perulangan untuk kolom
        for (j = 1; j <= i; j++)
        {
            // Mencetak hasil perkalian i dan j
            printf("%d ", i * j);
        }
        // Mencetak baris baru
        printf("\n");
    }

    return 0;
}


