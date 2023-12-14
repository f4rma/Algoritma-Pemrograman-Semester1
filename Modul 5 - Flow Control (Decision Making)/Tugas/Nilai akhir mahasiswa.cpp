/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>

int main()
{

    double kehadiran, tugas, uts, uas, akhir;
    char grade;
    char *keterangan;

	printf("Nama Programmer : Raditya Putra Farma\n");
	printf("NIM : 23343050\n");
	
	printf("|-------------------------------------|\n");
	printf("|    Program Nilai Akhir Mahasiswa    |\n");
	printf("|-------------------------------------|\n");

    printf("Masukkan nilai kehadiran: ");
    scanf("%lf", &kehadiran);
    printf("Masukkan nilai tugas: ");
    scanf("%lf", &tugas);
    printf("Masukkan nilai UTS: ");
    scanf("%lf", &uts);
    printf("Masukkan nilai UAS: ");
    scanf("%lf", &uas);


    akhir = (kehadiran * 0.2) + (tugas * 0.2) + (uts * 0.25) + (uas * 0.35);
    printf("Nilai akhir = %.2lf\n", akhir);


    if (akhir >= 0 && akhir <= 44)
    {
        grade = 'E';
        keterangan = "Maaf, anda tidak lulus!";
    }
    else if (akhir >= 45 && akhir <= 55)
    {
        grade = 'D';
        keterangan = "Maaf, anda tidak lulus!";
    }
    else if (akhir >= 56 && akhir <= 65)
    {
        grade = 'C';
        keterangan = "Anda lulus, tingkatkan lagi untuk kedepannya!";
    }
    else if (akhir >= 66 && akhir <= 75)
    {
        grade = 'B-';
        keterangan = "Anda lulus dengan baik, tingkatkan terus belajarnya!";
    }
    else if (akhir >= 76 && akhir <= 80)
    {
        grade = 'B';
        keterangan = "Anda lulus dengan baik, tingkatkan terus belajarnya!";
    }
    else if (akhir >= 81 && akhir <= 85)
    {
        grade = 'B+';
        keterangan = "Anda lulus dengan baik, tingkatkan terus belajarnya!";
    }
    else if (akhir >= 86 && akhir <= 90)
    {
        grade = 'A-';
        keterangan = "Selamat! Anda lulus dengan nilai yang sangat memuaskan.";
    }
    else if (akhir >= 91 && akhir <= 100)
    {
        grade = 'A';
        keterangan = "Selamat! Anda lulus dengan nilai yang sangat memuaskan.";
    }
    else
    {

        grade = '?';
        keterangan = "Nilai tidak valid!";
    }

    printf("Grade = %c\n", grade);
    printf("%s\n", keterangan);

    return 0;
}

