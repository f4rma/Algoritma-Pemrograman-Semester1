/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/

#include <stdio.h>

int main() {
    // Inisialisasi variabel
    int Lesley = 57082;
    int Layla1 = Lesley;
    int Balmond1 = Layla1 + 1;

    int *Layla2 = &Lesley;
    int Balmond2 = *Layla2 + 1;

    // Menjawab pertanyaan A
    printf("A.\n");
    printf("a) Nilai Layla: %d\n", Layla1);
    printf("b) Nilai Balmond: %d\n", Balmond1);

    // Menjawab pertanyaan B
    printf("B.\n");
    printf("a) Nilai Layla: %d\n", Layla2);
    printf("b) Nilai Balmond: %d\n", Balmond2);

    return 0;
}

