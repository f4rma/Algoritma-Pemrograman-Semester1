/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/

#include <stdio.h>

void main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file
	fptr =fopen("puisi.txt", "w");
	
	//mengambil input dari user
	printf("inputkan isi file: ");
	fgets(text, sizeof(text),stdin);
	
	//menulis ke text ke file
	fputs(text, fptr);
	
	printf("file berhasil ditulis\n\n");
	
	fclose(fptr);
	
	fptr = fopen("puisi.txt","r");
	
	while(fgets(buff, sizeof(buff), fptr))
	{
		printf("isi filenya sekarang: %s", buff);
	
	}
	
	//tutup file
	fclose(fptr);
}
