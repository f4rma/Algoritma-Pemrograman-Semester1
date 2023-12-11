/*
Created by : Raditya Putra Farma
	NIM : 23343050
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum StatusTebakan {
    TERLALU_RENDAH,
    TERLALU_TINGGI,
    BENAR,
};

struct Permainan {
    int nomorTarget;
    int percobaan;
};

// menghasilkan nomor acak antara min dan max
int hasilkanNomorAcak(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// mendapatkan tebakan dari pemain
int dapatkanTebakanPemain() {
    int tebakan;
    printf("Masukkan tebakan Anda (antara 1 sampai 20): ");
    scanf("%d", &tebakan);
    return tebakan;
}

// memeriksa status tebakan
enum StatusTebakan periksaTebakan(int target, int tebakan) {
    if (tebakan < target) {
        return TERLALU_RENDAH;
    } else if (tebakan > target) {
        return TERLALU_TINGGI;
    } else {
        return BENAR;
    }
}

void mainkanPermainan() {
    srand(time(NULL));

    struct Permainan permainan;
    permainan.nomorTarget = hasilkanNomorAcak(1, 20);
    permainan.percobaan = 0;

    printf("Selamat datang dalam permainan tebak angka!\n");

    while (1) {
        int tebakan = dapatkanTebakanPemain();
        permainan.percobaan++;

        enum StatusTebakan status = periksaTebakan(permainan.nomorTarget, tebakan);

        if (status == TERLALU_RENDAH) {
            printf("Nomor saya lebih besar!\n");
        } else if (status == TERLALU_TINGGI) {
            printf("Nomor saya lebih kecil!\n");
        } else {
            printf("Selamat, Anda benar!\n");
            printf("Jumlah percobaan: %d\n", permainan.percobaan);

            // Menanyakan apakah pemain ingin bermain lagi
            char mainLagi;
            printf("Ingin bermain lagi? (y/n): ");
            scanf(" %c", &mainLagi);

            if (mainLagi != 'y') {
                printf("Terima kasih telah bermain!\n");
                break;
            } else {
                // Reset permainan untuk permainan baru
                permainan.nomorTarget = hasilkanNomorAcak(1, 20);
                permainan.percobaan = 0;
            }
        }
    }
}

int main() {
    mainkanPermainan();

    return 0;
}

