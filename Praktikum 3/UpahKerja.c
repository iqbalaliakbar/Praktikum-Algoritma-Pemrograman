//Nama File: UpahKerja.c
//Deskripsi: Menghitung dan menampilkan besarnya upah kerja berdasarkan golongan dan banyaknya jam kerja pada layar
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>

int main()
{
    //Kamus
    float jamKerja;
    int golongan;

    //Algoritma
    printf("Masukkan golongan: ");
    scanf("%d", &golongan);
    printf("Masukkan jam kerja per minggu: ");
    scanf("%f/n", &jamKerja);

    if (jamKerja<=40){
        switch(golongan){
        case 1:
            printf("Upah kerja: Rp %.1f", jamKerja*1000);
            break;
        case 2:
            printf("Upah kerja: Rp %.1f", jamKerja*1500);
            break;
        case 3:
            printf("Upah kerja: Rp %.1f", jamKerja*2000);
            break;
        case 4:
            printf("Upah kerja: Rp %.1f", jamKerja*2500);
            break;
        }
    }
    else{
        switch(golongan){
        case 1:
            printf("Upah kerja: Rp.%.1f", (40*1000)+(jamKerja-40)*1000*1.5);
            break;
        case 2:
            printf("Upah kerja: Rp.%.1f", (40*1500)+(jamKerja-40)*1500*1.5);
            break;
        case 3:
            printf("Upah kerja: Rp.%.1f", (40*2000)+(jamKerja-40)*2000*1.5);
            break;
        case 4:
            printf("Upah kerja: Rp.%.1f", (40*2500)+(jamKerja-40)*2500*1.5);
            break;
        }
    }

    return 0;
}

