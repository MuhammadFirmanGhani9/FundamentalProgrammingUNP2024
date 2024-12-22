/*
    Nama File      : Latihan6.c 
	Programmer     : Muhammad Firman Ghani/24343061
	Tgl. pembuatan : Jumat, 8 November 2024
	Deskripsi      : Program ini menghitung Panjang String
*/

#include <stdio.h>
#include <string.h>
//Deklarasi Fungsi
int hitungPanjangString(char string []);
void judul();
int main (){

    judul();
    char string [20];

    printf("Masukkan kalimat:");
    scanf("%s", string);

    int panjangString=hitungPanjangString(string);
    printf("Jumlah Karakter Dalam Inputan Anda Adalah: %d\n",panjangString );
    return 0;
}
int hitungPanjangString(char string []){
    return strlen(string);
}
void judul(){
  	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
	printf("\t\t\t\t  NIM                 : 24343061\n");
	printf("\t\t\t\t  Prodi               : Informatika\n");
	printf("\t\t\t\t  Tugas               : Latihan 6A\n");
	printf("\t\t\t\t  Mata Kuliah         : Program Menghitung Panjang String\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Program ini menghitung Panjang String\n");
	printf("________________________________________________________________________________________________________________________\n\n");

}
