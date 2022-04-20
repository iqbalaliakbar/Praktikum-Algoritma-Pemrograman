//Nama file: Searching.c
//Deskripsi: Membuat prosedur searching pada tabel berurut
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include "Searching.h"
#include <stdio.h>
#include <stdbool.h>

void BinSearch(int T[], int N, int X, int *IX){
    // Kamus lokal
    int upper,mid,lower;

    // Algoritma
    upper = N-1;
    lower = 0;
    mid = (upper+lower)/2;

    while(X!=T[mid] && lower<upper){
        if(X>T[mid]){
            lower = mid+1;
        }
        else{
            upper = mid-1;
        }
        mid = (upper+lower)/2;
    }

    if(X==T[mid]){
        *IX = mid;
    }
    else{
        *IX = -1;
    }
}
