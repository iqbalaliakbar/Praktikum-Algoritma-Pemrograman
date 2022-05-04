//Nama file: insertionSort.c
//Deskripsi: Mengurutkan table/array menggunakan teknik insertion sort
//Nama: Iqbal Ali Akbar Muhammad
//NIM: 24060121130046

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i,j,key;

    //Algoritma {9,5,4,2,1}
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;

        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    int array[]={49,36,64,81,100,1,9,121,25,4,16};
    n=sizeof(array)/sizeof(array[0]);

    //Algoritma
    printf("Array sebelum diurutkan:\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n\n");

    insertionSort(array,n);
    printf("Setelah diurutkan:\n");
    sortArr(array,n);
}
