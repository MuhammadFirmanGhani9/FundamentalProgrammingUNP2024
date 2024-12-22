/* Nama File          : Tugas 5.C
   Programmer         : Muhammad Firman Ghani / 24343061
   Tanggal Pengkodean : Jumat, 18 Oktober 2024
   Deskripsi          : Program ini memasukkan data mahasiswa
*/  

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int bilangan, sisaBagi;
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
	printf("\t\t\t\t  NIM                 : 24343061\n");
	printf("\t\t\t\t  Prodi               : Informatika\n");
	printf("\t\t\t\t  Tugas               : Tugas Modul 5\n");
	printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemograman\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t Program ini memasukkan data mahasiswa\n");
	printf("________________________________________________________________________________________________________________________\n\n");
    int jumlahPerulangan; // Variabel untuk menyimpan jumlah pengulangan
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &jumlahPerulangan); // Membaca jumlah pengulangan

    for (int i = 0; i < jumlahPerulangan; i++) {
        char nama[100];
        char nim[20];
        char prodi[50];
        char universitas[50];
        char alamat[100];

        printf("Sistem informasi data mahasiswa!\n");

        printf("Masukkan nama          : "); fflush(stdin);
        scanf("%99[^\n]", nama); // Membaca nama

        getchar(); // Mengatasi masalah buffer agar input berikutnya tidak terlewat

        printf("Masukkan NIM           : "); fflush(stdin);
        scanf("%19[^\n]", nim); // Membaca NIM

        getchar(); // Mengatasi masalah buffer

        printf("Masukkan program studi : "); fflush(stdin);
        scanf("%49[^\n]", prodi); // Membaca program studi

        getchar(); // Mengatasi masalah buffer

        printf("Masukkan universitas   : "); fflush(stdin);
        scanf("%49[^\n]", universitas); // Membaca universitas

        getchar(); // Mengatasi masalah buffer

        printf("Masukkan alamat        : "); fflush(stdin);
        scanf("%99[^\n]", alamat); // Membaca alamat

        // Menampilkan data yang telah dimasukkan
        printf("\n\nInformasi data mahasiswa yang dimasukkan:\n\n");
        printf("Nama          : %s\n", nama);
        printf("NIM           : %s\n", nim);
        printf("Program Studi : %s\n", prodi);
        printf("Universitas   : %s\n", universitas);
        printf("Alamat        : %s\n", alamat);

        puts("\nTerima kasih atas informasi yang Anda berikan!\n");
    }

    return 0;
}
