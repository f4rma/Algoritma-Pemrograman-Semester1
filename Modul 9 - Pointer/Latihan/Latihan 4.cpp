/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/

#include <stdio.h>

int main(){
	//membuat variabel score
	int score = 0;
	
	//membuat pointer dan referensikan dengan alamat
	//dari variabel 
	int *p_score = &score;
	
	//mengakses data variabel score dari pointer
	printf("isi *p_score = %d\n", *p_score);
	
	printf("isi score awal = %d\n", score);
	
	//mengubah dara variabel score dari pointer
	*p_score= 5;
	
	//melihat isi variabel score
	printf("isi score setelah diubah = %d\n",score);
	
	return 0;
}
