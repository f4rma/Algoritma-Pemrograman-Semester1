/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/
#include <stdio.h>
#include <string.h>

int main(){
	
	
	printf("|-----------------------------------------|\n");
	printf("|Program Laman Login (username & password)|\n");
	printf("|-----------------------------------------|\n\n");
	
	char username[50];
	char password[50];
	
	printf("Username : ");
	gets(username);
	
	printf("Password : ");
	gets(password);

	if (strcmp(username, "RadityaFarma") == 0 && strcmp(password, "qwe4rty8") == 0)
	{
	printf("yooo welcome");}
	
	else{
		printf("walawee");
	}

	/*if(username == "Raditya Putra Farma")
	{ if (password == "radit")
		{
			printf("yoo welcome!\n");
		}
	}else
	{
		printf("Walawe\n");
	}
	*/
	return 0;
}
