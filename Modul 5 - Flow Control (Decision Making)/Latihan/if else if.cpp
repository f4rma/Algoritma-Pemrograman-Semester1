/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main() {
    int nilai;
    char grade;

    printf("=== Program Grade Nilai ===\n");
    printf("Inputkan nilai: ");
    scanf("%i", &nilai);

    // menggunakan percabangan if/esle/if
    if (nilai >= 90) {
        grade = 'A';
    } else if (nilai >= 80) {
        grade = 'B';
    } else if (nilai >= 70) {
        grade = 'C';
    } else if (nilai >= 60) {
        grade = 'D';
    } else if (nilai >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("Nilai: %i\n", nilai);
    printf("Grade anda: %c\n", grade);
    
    return 0;
}
