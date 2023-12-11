/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/

#include <stdio.h>

int main()
{
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if ((fptr = fopen("puisi.txt","r")) == NULL){
		printf("Error: File tidak ada!");
		exit(1);
	}
	
	//baca isi file dengan gets lalu simpan ke buff
	fgets(buff, 255, fptr);

	//tampilkan isi file
	printf("%s", buff);

	//tutup file
	fclose(fptr);
	
	return 0;
}

