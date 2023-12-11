/*
Created by : Raditya Putra Farma
NIM : 23343050
Sesi: 202313430008
*/

#include <stdio.h>

int main() {
    char word[] = "BORLAND";
    char *ptr = word;

    for (int i = 0; i < 7; i++) {
        for (int j = i; j < 7; j++) {
            printf("%c", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}
