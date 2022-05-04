//Nama file: selectionSort.c
//Deskripsi: Mengurutkan table/array menggunakan teknik selection sort
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n){
    //Kamus lokal
    int i,j,min_idx,swap;

    //Algoritma
    for(i=0;i<(n-1);i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
        if(arr[min_idx]>arr[j]){
            min_idx=j;
        }
        }
    if(min_idx!=i){
      swap=arr[i];
      arr[i]=arr[min_idx];
      arr[min_idx]=swap;
    }
    }
}

void sortArr(int Arr[], int n){
    //Kamus lokal
    int i;

    //Algoritma
    for(i=0;i<n;i++){
        printf("%d ",Arr[i]);
    }
    printf("\n");
}

int main(){
    //Kamus
    int n,i;
    int array[]={31,22,15,60,44,11,54,43,100,73,6,90};
    n=sizeof(array)/sizeof(array[0]);

    //Algoritma
    printf("Array sebelum diurutkan:\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n\n");

    selectionSort(array,n);
    printf("Setelah diurutkan:\n");
    sortArr(array,n);
}
