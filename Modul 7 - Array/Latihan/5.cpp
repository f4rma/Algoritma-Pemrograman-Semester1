/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>
	
int main(){
	//membuat array 
	int nilai[5] = {33, 22, 11, 44, 21};
	
	//mengambil banyaknya isi array 
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d\n", length);
}
