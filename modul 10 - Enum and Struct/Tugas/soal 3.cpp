/*
Created by : Raditya Putra Farma
	NIM : 23343050
*/
#include <stdio.h>
#include <string.h>
struct Mahasiswa {
    int npm;
    char nama[50];
    char tglLahir[10];
    char alamat[50];
    int hp;
};

int main() {
    struct Mahasiswa dataMahasiswa[100];
    int jumlahMahasiswa = 0;

    char pilihan;

    do {
        printf("NPM : ");
        scanf(" %d", &dataMahasiswa[jumlahMahasiswa].npm);

        printf("NAMA : ");
        getchar(); 
        fgets(dataMahasiswa[jumlahMahasiswa].nama, sizeof(dataMahasiswa[jumlahMahasiswa].nama), stdin);
        dataMahasiswa[jumlahMahasiswa].nama[strcspn(dataMahasiswa[jumlahMahasiswa].nama, "\n")] = '\0'; 

       
   		printf("TGL LAHIR : ");
    	getchar(); 
    	fgets(dataMahasiswa[jumlahMahasiswa].tglLahir, sizeof(dataMahasiswa[jumlahMahasiswa].tglLahir), stdin);
    	dataMahasiswa[jumlahMahasiswa].tglLahir[strcspn(dataMahasiswa[jumlahMahasiswa].tglLahir, "\n")] = '\0';

        printf("ALAMAT :");
        getchar(); 
        fgets(dataMahasiswa[jumlahMahasiswa].alamat, sizeof(dataMahasiswa[jumlahMahasiswa].alamat), stdin);
        dataMahasiswa[jumlahMahasiswa].alamat[strcspn(dataMahasiswa[jumlahMahasiswa].alamat, "\n")] = '\0';

        printf("HP : ");
        scanf(" %d", &dataMahasiswa[jumlahMahasiswa].hp);

        // tampilkan data mahasiswa yang baru dimasukkan
        printf("%-15d%-17s%-17s%-17s%-7d\n", dataMahasiswa[jumlahMahasiswa].npm,
               dataMahasiswa[jumlahMahasiswa].nama, dataMahasiswa[jumlahMahasiswa].tglLahir,
               dataMahasiswa[jumlahMahasiswa].alamat, dataMahasiswa[jumlahMahasiswa].hp);

        jumlahMahasiswa++; // Menambah jumlah mahasiswa

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    // tampilkan seluruh data mahasiswa yang telah dimasukkan
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%-15d%-17s%-17s%-17s%-7d\n", dataMahasiswa[i].npm,
               dataMahasiswa[i].nama, dataMahasiswa[i].tglLahir,
               dataMahasiswa[i].alamat, dataMahasiswa[i].hp);
    }

    return 0;
}

