#include <stdio.h>
int main()
{
	printf("Created by : Raditya Putra Farma\n");
	printf("NIM : 23343050\n\n");
	
char name[30];
// puts seperti printf (untuk menampilkan output).
// simbol [^\n] pada tengah format agar teks yang mengandung spasi, hasilnya tidak dipecah.

puts("Hello siapa nama lengkapmu?");
scanf("%[^\n]s",&name);

printf("\n--------------------------------\n");
printf("Selamat datang %s dalam Pemrograman C!", name);


return 0;
}
