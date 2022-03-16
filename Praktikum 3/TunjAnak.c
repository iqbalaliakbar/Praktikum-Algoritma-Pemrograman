//Nama File: TunjAnak.c
//Deskripsi: Menghitung dan menampilkan besarnya tunjangan anak berdasarkan jumlah anak dan gaji pokok pada layar
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>

int main()
{
    //Kamus
    float gaji;
    int anak;

    //Algoritma
    printf("Masukkan jumlah anak: ");
    scanf("%d/n", &anak);
    printf("Masukkan gaji pokok: ");
    scanf("%f/n", &gaji);

    switch(anak){
    case 0:
        printf("Tunjangan anak: 0");
        break;
    case 1:
        printf("Tunjangan anak: %.1f", 0.1*gaji);
        break;
    case 2:
        printf("Tunjangan anak: %.1f", 2*(0.1*gaji));
        break;
    case 3:
        printf("Tunjangan anak: %.1f", 3*(0.1*gaji));
        break;
    default:
        printf("Tunjangan anak: %.1f", 3*(0.1*gaji));

    }


    return 0;
}

