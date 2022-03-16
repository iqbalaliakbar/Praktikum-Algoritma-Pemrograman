//Nama File: HargaDiskon.c
//Deskripsi: Menghitung dan menampilkan besarnya harga setelah diberikan diskon (3 jenis diskon) pada layar
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float harga;
    char diskon;

    //Algoritma
    printf("Masukkan harga: Rp.");
    scanf("%f", &harga);
    printf("Masukkan diskon: ");
    scanf(" %c/n", &diskon);

    if(harga>200 && harga<10000){
        switch(diskon){
            case 'A' :
                printf("Harga akhir: Rp.%.1f", harga*0.9);
                break;
            case 'B' :
                printf("Harga akhir: Rp.%.1f", harga*0.85);
                break;
            case 'C' :
                printf("Harga akhir: Rp.%.1f", harga*0.8);
                break;
            default :
                printf("Input diskon tidak benar");
        }
    }
    else{
        printf("Harga harus diantara 200 dan 10000");
    }

    return 0;
}

