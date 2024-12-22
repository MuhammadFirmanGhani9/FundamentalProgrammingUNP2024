/*      Nama File      : Latihan6.c 
    	Programmer     : Muhammad Firman Ghani/24343061
    	Tgl. pembuatan : Jumat, 8 November 2024
		Deskripsi      : Program ini membandingkan 2 String
*/
#include <stdio.h>
#include <string.h>
int membandingkanString(char str1[], char str2[]);
void judul();
int main() {
    judul();
    char str1[100];  
    char str2[100];  
    // Meminta input dari pengguna
    printf("Masukkan input pertama: ");
    scanf("%s", str1); 

    printf("Masukkan input kedua  : ");
    scanf("%s", str2); 
    // pemanggilan fungsi untuk variabel "hasil"
    int hasil = membandingkanString(str1, str2);
    // penampilan hasil perbandingan string
    if (hasil == 0) {
        printf("Inputan dinyatakan sama\n");
    } else {
        printf("Inputan dinyatakan tidak sama\n");
    }
    return 0;
}
int membandingkanString(char str1[], char str2[]) {
    //membandingkan dua string
    return strcmp(str1, str2);
}
void judul(){
      printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
	printf("\t\t\t\t  NIM                 : 24343061\n");
	printf("\t\t\t\t  Prodi               : Informatika\n");
	printf("\t\t\t\t  Tugas               : Latihan 6C\n");
	printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemograman\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Program ini membandingkan 2 String\n");
	printf("________________________________________________________________________________________________________________________\n\n");
}
