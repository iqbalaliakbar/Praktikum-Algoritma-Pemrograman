//Nama file: main.c
//Deskripsi: Membuat prosedur searching pada tabel berurut
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>
#include <stdlib.h>
#include "Searching.h"

int main()
{
    // Kamus
    int array[] = {1,4,6,8,12,15,19,25,46,60,72,81,90};
    int x = 12;
    int n = sizeof(array)/sizeof(array[0]);
    int ix;

    // Algoritma
    BinSearch(array, n, x, &ix);

    if(ix==-1){
        printf("Elemen tidak ditemukan");
    }
    else{
        printf("Elemen ditemukan pada index ke-%d", ix);
    }

    return 0;
}
