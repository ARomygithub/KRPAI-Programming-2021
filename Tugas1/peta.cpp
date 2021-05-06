#include "peta.h"
#include<iostream>
using namespace std;

// Petunjuk: Elemen pada double pointer dapat diakses seperti array biasa.
// Misalkan ingin mengakses elemen baris i kolom j, maka cukup buat matrix[i][j]

char** BuatPeta(int n_peta){
    // Buat baris yang berisi pointer ke elemen masing-masing baris
    char** peta = new char*[n_peta];
    // Isi masing-masing baris dengan elemen kolom
    for(int i=0; i<n_peta; i++){
        peta[i] = new char[n_peta];
    } 
    // Isikan elemen ke peta untuk pertama kalinya
    // Silahkan tuliskan implementasi
    for(int i=0;i<n_peta;i++) {
        for(int j=0;j<n_peta;j++) {
            if(i==0 || i==n_peta -1 || j==0 || j==n_peta -1) {  // Petak batas
                peta[i][j]='x';
            } else {                                            // Bukan petak batas
                peta[i][j]='-';
            }
        }
    }

    return peta;
}

void PrintPeta(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari Depan" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari depan
    for(int i=0;i<n_peta;i++) {
        for(int j=0;j<n_peta;j++) {
            cout <<peta[i][j];
        }
        cout <<"\n";
    }
}

void PrintViewKanan(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari Kanan" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari kanan
    for(int j=0;j<n_peta;j++) {
        for(int i=n_peta -1;i>=0;i--) {
            cout <<peta[i][j];  //loop disesuaikan dengan arah penglihatan
        }
        cout <<"\n";
    }
}

void PrintViewKiri(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari Kiri" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari kiri
    for(int j=n_peta -1;j>=0;j--) {
        for(int i=0;i<n_peta;i++) {
            cout <<peta[i][j]; //loop disesuaikan dengan arah penglihatan
        }
        cout <<"\n";
    }
}