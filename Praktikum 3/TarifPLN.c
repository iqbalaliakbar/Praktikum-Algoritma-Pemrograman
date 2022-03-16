//Nama File: TarifPLN.c
//Deskripsi: Menghitung dan menampilkan besarnya tarif listrik berdasarkan golongan tarif dan pemakaian daya listrik pada layar
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>

int main()
{
    //Kamus
    float tarif;
    int golongan,pemakaian;

    //Algoritma
    printf("Masukkan golongan: ");
    scanf("%d/n", &golongan);
    printf("Masukkan pemakaian daya listrik: ");
    scanf("%d/n", &pemakaian);

    tarif=pemakaian*(golongan*1000);
    if (pemakaian>=100 && pemakaian<1000){
        printf("Tarif listrik: Rp.%.1f", tarif);
    }
    else{
        printf("Tarif listrik: Rp.%.1f", tarif+(tarif*0.1));
    }


    return 0;
}

