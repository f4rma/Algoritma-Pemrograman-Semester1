/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
kasus program	: program menu ATM
c) Hattori melakukan penarikan ketiga sebesar Rp. 120.000. 
Berapakah sisa saldo Hattori?
*/
#include <stdio.h>

// Deklarasi variabel global
int no_rek = 0123; // Nomor rekening
char nama[10] = "Hattori"; // Nama akun
int saldo = 175000; // Saldo ATM
int pilihan; // Pilihan menu
int jumlah; // Jumlah setoran atau penarikan

// Fungsi untuk menampilkan menu ATM
void menu() {
    printf("ATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);
}

// Fungsi untuk menampilkan saldo
void cek_saldo() {
    printf("No Rek : %d\n", no_rek);
    printf("Nama Akun : %s\n", nama);
    printf("Saldo ATM : Rp. %d\n", saldo);
}

// Fungsi untuk melakukan setoran
void setoran() {
    printf("Masukkan jumlah setoran: ");
    scanf("%d", &jumlah);
    if (jumlah > 0) {
        saldo = saldo + jumlah; // Menambahkan jumlah setoran ke saldo
        printf("Setoran berhasil. Saldo Anda sekarang adalah Rp. %d\n\n", saldo);
    } else {
        printf("Jumlah setoran tidak valid.\n\n");
    }
}

// Fungsi untuk melakukan penarikan tunai
void penarikan() {
    printf("Masukkan jumlah penarikan: ");
    scanf("%d", &jumlah);
    if (jumlah > 0) {
        if (saldo - jumlah >= 50000) { // Memeriksa apakah saldo cukup untuk penarikan
            saldo = saldo - jumlah; // Mengurangi jumlah penarikan dari saldo
            printf("Penarikan berhasil. Saldo Anda sekarang adalah Rp. %d\n\n", saldo);
        } else {
            printf("Saldo Anda tidak cukup untuk penarikan.\n\n");
        }
    } else {
        printf("Jumlah penarikan tidak valid.\n\n");
    }
}

// Fungsi utama
int main() {
    do {
        menu(); // Memanggil fungsi menu
        switch (pilihan) { // Menjalankan fungsi sesuai dengan pilihan
            case 1:
                cek_saldo();
                break;
            case 2:
                setoran();
                break;
            case 3:
                penarikan();
                break;
            case 4:
                printf("Terima kasih telah menggunakan layanan kami.\n\n");
                return 0;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (4); // Mengulangi program sampai pilihan 4 dipilih
}

/*Kasus:
No Rek : 0123
Nama Akun : Hatori
Saldo ATM : Rp. 175.000
Skenario:
a) Hattori menyetorkan uang sebesar Rp. 25.000, kemudian setoran 
kedua sebesar Rp. 45.000. Berapakah saldo Hattori saat ini?
b) Hattori melakukan penarikan pertama sebesar Rp. 50.000, kemudian 
penarikan kedua sebesar Rp. 45.000. Berapakah sisa saldo Hattori 
setelah itu?
c) Hattori melakukan penarikan ketiga sebesar Rp. 120.000. Berapakah 
sisa saldo Hattori?
*/

