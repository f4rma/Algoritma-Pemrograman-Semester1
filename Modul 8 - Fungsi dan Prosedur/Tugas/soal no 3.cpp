/*
Created by : Raditya Putra Farma
NIM : 23343050
soal: Buatlah program untuk menghitung luas dan 
keliling lingkaran dengan menggunakan fungsi
*/

#include <stdio.h>
#define PI 3.14

// Fungsi untuk menghitung luas lingkaran
float luas(float r) {
  return PI * r * r;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float r) {
  return 2 * PI * r;
}

int main() {
  float jari_jari;
  printf("Masukkan jari-jari lingkaran: ");
  scanf("%f", &jari_jari);

  printf("Luas lingkaran = %.2f\n", luas(jari_jari));
  printf("Keliling lingkaran = %.2f\n", keliling(jari_jari));

  return 0;
}


