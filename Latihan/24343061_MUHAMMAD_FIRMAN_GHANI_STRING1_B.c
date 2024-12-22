/*
    Nama File      : Latihan6.c 
	Programmer     : Muhammad Firman Ghani/24343061
	Tgl. pembuatan : Jumat, 8 November 2024
	Deskripsi      : Program ini menggabungkan 2 String
*/

#include <stdio.h>
#include <string.h>

// Deklarasi fungsi gabungkanString
void gabungkanString(char str1[], char str2[], char hasil[]);
void judul();
int main() {
    judul();
    char str1[50];  
    char str2[50];  
    char hasil[100]; 

    printf("Masukkan inputan pertama: ");
    scanf("%s", str1);

    printf("Masukkan Inputan kedua  : ");
    scanf("%s", str2);

    // Menggabungkan string
    gabungkanString(str1, str2, hasil);

    // Menampilkan hasil penggabungan
    printf("Hasil penggabungan Input: %s\n", hasil);

    return 0;
}
void judul(){
    printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
	printf("\t\t\t\t  NIM                 : 24343061\n");
	printf("\t\t\t\t  Prodi               : Informatika\n");
	printf("\t\t\t\t  Tugas               : Latihan 6B\n");
	printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemograman\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Program ini menggabungkan 2 String\n");
	printf("________________________________________________________________________________________________________________________\n\n");

}
void gabungkanString(char str1[], char str2[], char hasil[]) {
 
    strcpy(hasil, str1);
 
    strcat(hasil, str2);
}
