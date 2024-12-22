/*
    Nama File      : Latihan7.c 
	Programmer     : Muhammad Firman Ghani/24343061
	Tgl. pembuatan : Jumat, 8 November 2024
	Deskripsi      : Program ini menampilkan elemen Array
*/
#include <stdio.h>

int main() {
    // Deklarasikan array 
    int angka[5] = {9, 18, 27, 36, 45};
    int i;
    
    printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
	printf("\t\t\t\t  NIM                 : 24343061\n");
	printf("\t\t\t\t  Prodi               : Informatika\n");
	printf("\t\t\t\t  Tugas               : Latihan 7A\n");
	printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemograman\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Program ini menampilkan elemen Array\n");
	printf("________________________________________________________________________________________________________________________\n\n");
  	// Menggunakan loop untuk menampilkan semua elemen array
        for (i = 0; i < 5; i++) 
        printf("Angka pada Array ke-%d: %d\n", i + 1, angka[i]);
        


    return 0;
}
