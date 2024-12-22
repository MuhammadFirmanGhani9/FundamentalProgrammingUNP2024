/*
    Nama File      : Latihan7.c 
    Programmer     : Muhammad Firman Ghani/24343061
    Tgl. pembuatan : Jumat, 8 November 2024
    Deskripsi      : Program ini mengganti nilai elemen sebuah Array
*/
#include <stdio.h>

int main() {
    // Deklarasikan array 
    int angka[5] = {27, 99, 72, 27, 9};
    int indeks, nilaiBaru;
    int i;
    
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
    printf("\t\t\t\t  NIM                 : 24343061\n");
    printf("\t\t\t\t  Prodi               : Informatika\n");
    printf("\t\t\t\t  Tugas               : Latihan 7C\n");
    printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemrograman\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Program manajemen restoran implementasi struct\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    
    // Menampilkan array awal
    printf("Array awal:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemen ke-%d: %d\n", i, angka[i]);
    }

    // Meminta pengguna memasukkan nomor indeks yang ingin diganti
    printf("\nMasukkan indeks elemen yang ingin diganti (0-4): ");
    scanf("%d", &indeks);

    // Validasi indeks
    if (indeks < 0 || indeks >= 5) {
        printf("Indeks tidak valid. Harus antara 0 dan 4.\n");
        return 1; // Keluar dari program jika indeks tidak valid
    }

    printf("Masukkan nilai baru untuk elemen ke-%d: ", indeks);
    scanf("%d", &nilaiBaru);

    // Ganti nilai pada elemen yang dipilih
    angka[indeks] = nilaiBaru;

    // Menampilkan array setelah nilai elemen diganti
    printf("\nArray setelah diganti:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemen ke-%d: %d\n", i, angka[i]);
    }

    return 0;
}

