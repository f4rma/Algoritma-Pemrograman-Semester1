/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/

#include <stdio.h>

int sum(int n);

int main(){
	int number, result;
	
	printf("enter a positive integer: ");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d", result);
}

int sum(int num){
	if (num!=0)
	return num + sum(num-1);
	else
	return num;
}
