//Nama file: nomor2.c
//Deskripsi: Menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int T[100],maks,min,i,selisih,N,a;

    //Algoritma
    printf("Masukan N: ");
    scanf("%d",&N);

    if(N>0){
        for(i=0;i<N;i++){
            printf("T[%d]: ",i);
            scanf("%d",&T[i]);

        }
        maks=T[0];min=T[0];
        for(i=0;i<N;i++){
            if(maks<T[i]){
                maks=T[i];
            }
        }
        for(i=0;i<N;i++){
            if(min>T[i]){
                min=T[i];
            }
        }

        printf("Tabel = ");
        for(i=0;i<N;i++){
                printf("%d ",T[i]);
        }
        selisih=maks-min;
        printf("\nSelisih maks min: \n%d - %d = %d",maks,min,selisih);
    }
    else{
        printf("N harus positif");
    }

    return 0;
}

