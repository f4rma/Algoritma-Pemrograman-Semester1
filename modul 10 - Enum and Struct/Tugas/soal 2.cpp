/*
Created by : Raditya Putra Farma
	NIM : 23343050
*/
#include <stdio.h>


enum Bulan {
    JANUARI = 1, FEBRUARI, MARET, APRIL, MEI, JUNI,
    JULI, AGUSTUS, SEPTEMBER, OKTOBER, NOVEMBER, DESEMBER
};


enum Zodiak {
    CAPRICORN, AQUARIUS, PISCES, ARIES, TAURUS, GEMINI,
    CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS
};


struct TanggalLahir {
    int tanggal;
    enum Bulan bulan;
    int tahun;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
enum Zodiak tentukanZodiak(struct TanggalLahir tanggalLahir) {
    if ((tanggalLahir.bulan == DESEMBER && tanggalLahir.tanggal >= 22) || 
        (tanggalLahir.bulan == JANUARI && tanggalLahir.tanggal <= 19)) {
        return CAPRICORN;
    } else if ((tanggalLahir.bulan == JANUARI && tanggalLahir.tanggal >= 20) || 
               (tanggalLahir.bulan == FEBRUARI && tanggalLahir.tanggal <= 18)) {
        return AQUARIUS;
    } else if ((tanggalLahir.bulan == FEBRUARI && tanggalLahir.tanggal >= 19) || 
               (tanggalLahir.bulan == MARET && tanggalLahir.tanggal <= 20)) {
        return PISCES;
    } else if ((tanggalLahir.bulan == MARET && tanggalLahir.tanggal >= 21) || 
               (tanggalLahir.bulan == APRIL && tanggalLahir.tanggal <= 19)) {
        return ARIES;
    } else if ((tanggalLahir.bulan == APRIL && tanggalLahir.tanggal >= 20) || 
               (tanggalLahir.bulan == MEI && tanggalLahir.tanggal <= 20)) {
        return TAURUS;
    } else if ((tanggalLahir.bulan == MEI && tanggalLahir.tanggal >= 21) || 
               (tanggalLahir.bulan == JUNI && tanggalLahir.tanggal <= 20)) {
        return GEMINI;
    } else if ((tanggalLahir.bulan == JUNI && tanggalLahir.tanggal >= 21) || 
               (tanggalLahir.bulan == JULI && tanggalLahir.tanggal <= 22)) {
        return CANCER;
    } else if ((tanggalLahir.bulan == JULI && tanggalLahir.tanggal >= 23) || 
               (tanggalLahir.bulan == AGUSTUS && tanggalLahir.tanggal <= 22)) {
        return LEO;
    } else if ((tanggalLahir.bulan == AGUSTUS && tanggalLahir.tanggal >= 23) || 
               (tanggalLahir.bulan == SEPTEMBER && tanggalLahir.tanggal <= 22)) {
        return VIRGO;
    } else if ((tanggalLahir.bulan == SEPTEMBER && tanggalLahir.tanggal >= 23) || 
               (tanggalLahir.bulan == OKTOBER && tanggalLahir.tanggal <= 22)) {
        return LIBRA;
    } else if ((tanggalLahir.bulan == OKTOBER && tanggalLahir.tanggal >= 23) || 
               (tanggalLahir.bulan == NOVEMBER && tanggalLahir.tanggal <= 21)) {
        return SCORPIO;
    } else {
        return SAGITTARIUS;
    }
}

int main() {
    struct TanggalLahir tanggalLahir;
    printf("Masukkan Tanggal Lahir Anda [tgl-bln-tahun]: ");
    scanf("%d-%d-%d", &tanggalLahir.tanggal, (int*)&tanggalLahir.bulan, &tanggalLahir.tahun);

    // Tentukan zodiak
    enum Zodiak zodiak = tentukanZodiak(tanggalLahir);

    // Tampilkan hasil
    printf("Tanggal Lahir Anda: %02d-%02d-%d\n", tanggalLahir.tanggal, (int)tanggalLahir.bulan, tanggalLahir.tahun);
    printf("Zodiak Anda adalah: ");

    // Tampilkan nama zodiak
    switch (zodiak) {
        case CAPRICORN:
            printf("CAPRICORN\n");
            break;
        case AQUARIUS:
            printf("AQUARIUS\n");
            break;
        case PISCES:
            printf("PISCES\n");
            break;
        case ARIES:
            printf("ARIES\n");
            break;
        case TAURUS:
            printf("TAURUS\n");
            break;
        case GEMINI:
            printf("GEMINI\n");
            break;
        case CANCER:
            printf("CANCER\n");
            break;
        case LEO:
            printf("LEO\n");
            break;
        case VIRGO:
            printf("VIRGO\n");
            break;
        case LIBRA:
            printf("LIBRA\n");
            break;
        case SCORPIO:
            printf("SCORPIO\n");
            break;
        case SAGITTARIUS:
            printf("SAGITTARIUS\n");
            break;
        default:
            printf("UNKNOWN\n");
            break;
    }

    return 0;
}


