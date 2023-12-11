//created by: Raditya Putra Farma
// NIM: 23343050
#include <stdio.h>

int main() {
    // Deklarasi file pointer
    FILE *file;

    // Membuka file untuk ditulis
    file = fopen("datamahasiswa.txt", "w");

    // Menyimpan jumlah mahasiswa yang akan diinput
    int jumlahMahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Loop untuk menginput biodata mahasiswa dan menyimpannya dalam file
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        fprintf(file, "Data mahasiswa ke-%d\n", i);
        
        // Input data mahasiswa
        char nama[100], nim[20], jurusan[50], prodi[50];
        printf("Nama mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", nama);  // Menggunakan %[^\n]s untuk membaca spasi
        fprintf(file, "Nama: %s\n", nama);

        printf("NIM mahasiswa ke-%d: ", i);
        scanf("%s", nim);
        fprintf(file, "NIM: %s\n", nim);

        printf("Jurusan mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", jurusan);
        fprintf(file, "Jurusan: %s\n", jurusan);

        printf("Program Studi mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", prodi);
        fprintf(file, "Program Studi: %s\n", prodi);

        fprintf(file, "\n");  // Spasi antar data mahasiswa
    }

    // Menutup file
    fclose(file);

    printf("Data mahasiswa telah disimpan dalam file datamahasiswa.txt.\n");

    return 0;
}

