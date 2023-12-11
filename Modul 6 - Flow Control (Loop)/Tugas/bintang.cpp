/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main()
{
    int i, j;
    
	printf("|--------------------------------------|\n");
	printf("|    	Program Piramida Asteris 	   |\n");
	printf("|--------------------------------------|\n\n");
	
    // Perulangan untuk baris
    for (i = 1; i <= 5; i++)
    {
        // Perulangan untuk kolom
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

