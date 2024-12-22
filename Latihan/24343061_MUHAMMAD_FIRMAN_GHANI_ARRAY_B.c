/*
    Nama File      : Latihan7.c 
    Programmer     : Muhammad Firman Ghani/24343061
    Tgl. pembuatan : Jumat, 8 November 2024
    Deskripsi      : Program ini menjumlahkan elemen dalam sebuah Array
*/
#include <stdio.h>

int main() {
    // Mendeklarasikan array
    int angka[5] = {9, 99, 999, 9999, 99999};
    int jumlah = 0; // Variabel untuk menyimpan hasil penjumlahan
    int i;

    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
    printf("\t\t\t\t  NIM                 : 24343061\n");
    printf("\t\t\t\t  Prodi               : Informatika\n");
    printf("\t\t\t\t  Tugas               : Latihan 7B\n");
    printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemrograman\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Program ini menampilkan dan menjumlahkan elemen Array\n");
    printf("________________________________________________________________________________________________________________________\n\n");

    printf("Daftar elemen array:\n");
    // Menggunakan loop untuk menampilkan semua elemen array
    for (i = 0; i < 5; i++) {
        printf("Elemen ke-%d: %d\n", i + 1, angka[i]);
    }
        
    // Menggunakan loop untuk menjumlahkan semua elemen array
    for (i = 0; i < 5; i++) {
        jumlah += angka[i];
    }

    // Tampilkan hasil penjumlahan
    printf("\nJumlah semua elemen array: %d\n", jumlah);

    return 0;
}

