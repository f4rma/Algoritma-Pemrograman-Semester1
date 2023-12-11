
#include <stdio.h>

int main()
{
	printf("Created by : Raditya Putra Farma\n");
	printf("NIM : 23343050\n\n");
	
char nama[40], prodi[40], fakultas[40];
int nim;
float npraktikum, uts, uas, nakhir;

//input data

	printf("Nama: ");
	scanf("%[^\n]s", nama);

		printf("NIM: ");
		scanf("%d", nim);

			printf("Program Studi: ");
			scanf("%s", prodi);

				printf("Fakultas: ");
				scanf("%[^\n]s", fakultas);

//input nilai

				printf("\nNilai Praktikum: ");
				scanf("%lf", npraktikum);

			printf("Nilai UTS: ");
			scanf("%lf", uts);

		printf("Nilai UAS: ");
		scanf("%lf", uas);

	printf("Nilai Akhir: ");
	scanf("%lf", nakhir);


nakhir= 0.3 * npraktikum + 0.3 * uts+ 0.4 * uas;

printf("\nData Mahasiswa\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Program Studi: %s\n", prodi);
    printf("Fakultas: %s\n", fakultas);
    printf("Nilai Akhir: %.2f\n", nakhir);

    return 0;




}
