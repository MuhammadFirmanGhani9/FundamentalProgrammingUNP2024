/* Nama File          : Input Teks.c
   Programmer         : Muhammad Firman Ghani / 24343061
   Tanggal Pengkodean : Jumat, 22 November 2024
   Deskripsi          : Program ini menampilkan input teks
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisi struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nama[50];
    char nim[15];
    char jurusan[30];
};

int main() {
    struct Mahasiswa mahasiswa[100];
    int jumlahMahasiswa = 0;
   	printf("________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t Nama                : Muhammad Firman Ghani\n");
    printf("\t\t\t\t NIM                 : 24343061\n");
    printf("\t\t\t\t Prodi               : Informatika\n");
    printf("\t\t\t\t Tugas               : Input Teks\n");
    printf("\t\t\t\t Mata Kuliah         : Fundamental Pemograman\n");
    printf("\t\t\t\t Deskripsi           : Program ini menampilkan input teks\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    

    // Membaca file input.txt
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("File input.txt tidak dapat dibuka!\n");
        return 1;
    }

    // Membaca data dari file dan menyimpannya dalam array of struct
    while (fscanf(inputFile, "%s %s %s", mahasiswa[jumlahMahasiswa].nama, mahasiswa[jumlahMahasiswa].nim, mahasiswa[jumlahMahasiswa].jurusan) != EOF) {
        jumlahMahasiswa++;
    }
    fclose(inputFile);

    // Menampilkan data yang telah dibaca
    printf("Data Mahasiswa dari File:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Nama: %s, NIM: %s, Jurusan: %s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].jurusan);
    }

    // Meminta input data mahasiswa baru
    printf("\nMasukkan data mahasiswa baru:\n");
    printf("Nama: ");
    scanf("%s", mahasiswa[jumlahMahasiswa].nama);
    printf("NIM: ");
    scanf("%s", mahasiswa[jumlahMahasiswa].nim);
    printf("Jurusan: ");
    scanf("%s", mahasiswa[jumlahMahasiswa].jurusan);
    jumlahMahasiswa++;

    // Menulis seluruh data ke file output.txt
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("File output.txt tidak dapat dibuat!\n");
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        fprintf(outputFile, "%s %s %s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].jurusan);
    }
    fclose(outputFile);

    printf("\nData berhasil disimpan ke output.txt!\n");

    return 0;
}
