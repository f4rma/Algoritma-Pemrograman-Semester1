/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/

#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[85]; 
    char kalimatTerbalik[85]; 
    int panjang;

    printf("Masukkan kalimat: ");
    gets(kalimat);

    panjang = strlen(kalimat);

    // Membalikkan kalimat
    for (int i = 0; i < panjang; i++) {
        kalimatTerbalik[i] = kalimat[panjang - i - 1];
    }

    // Menambahkan null terminator di akhir kalimat terbalik
    kalimatTerbalik[panjang] = '\0';

    printf("Kebalikannya: %s\n", kalimatTerbalik);

    return 0;
}

