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
        for (int j = i; j >= 0; j--) {
            printf("%c", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}


/*
#include <stdio.h>

int main() {
    char word[] = "BORLAND";
    char *ptr = word;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}
*/
