/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>
#include <string.h>
int  main( ){
	// membuat array karakter untuk menyimpan password
	char password[30];

	printf("==== Program Login ====\n");
	printf("Masukan password: ");
	scanf("%s", &password);

	// percabangan if/este
	if( strcmp(password, "kopi") ==0 ){	
	printf("Selamat datang bos!\n");
	} else{
	printf("Password salah, coba lagi!\n");
	}
	printf("Terimakasih sudah menggunakan aplikasi ini! \n");
	
	return 0;
}
