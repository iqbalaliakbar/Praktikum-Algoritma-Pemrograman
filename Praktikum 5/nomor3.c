//Nama file: nomor3.c
//Deskripsi: Menjumlahkan semua sub array/tabel
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int T[100],i,j,N,sum=0,a;

    //Algoritma
    printf("Masukan N: ");
    scanf("%d",&N);

    if(N>0){
        for(i=0;i<N;i++){
            printf("T[%d]: ",i);
            scanf("%d",&T[i]);
        }
        for(i=0;i<N;i++){
            a=0;
            printf("(");
            for(j=i;j<N;j++){
                a+=T[j];
                if(j+1!=N){
                    printf("%d+", T[j]);
                }
                else{
                    printf("%d", T[j]);
                }
            }
            printf(")");
            if(i+1!=N){
                printf("+");
            }
            sum+=a;
        }
        printf("=%d",sum);
    }

    else{
        printf("Masukan N harus positif");
    }

    return 0;
}

