//Nama File: BiayaParkir.c
//Deskripsi: Menghitung dan menampilkan besar biaya parkir berdasarkan lamanya parkir pada layar
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>

int main()
{
    //Kamus
    int lamaParkir,harga;

    //Algoritma
    printf("Masukkan lama parkir: ");
    scanf("%d", &lamaParkir);

    harga = 2000+((lamaParkir-2)*500);
    if (lamaParkir<2){
        printf("Harga parkir: Rp.2000");
    }
    else{
        printf("Harga parkir: Rp.%d", harga);
    }

    return 0;
}

