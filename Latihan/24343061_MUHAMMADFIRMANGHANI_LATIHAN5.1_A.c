#include <stdio.h>

// Fungsi untuk menghitung luas persegi panjang
int hitungLuasPersegiPanjang(int panjang, int lebar) {
    return panjang * lebar;
}

int main() {
    int panjang, lebar;
    printf("________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t Nama                : Muhammad Firman Ghani\n");
    printf("\t\t\t\t NIM                 : 24343061\n");
    printf("\t\t\t\t Prodi               : Informatika\n");
    printf("\t\t\t\t Tugas               : Luas Persegi Panjang\n");
    printf("\t\t\t\t Mata Kuliah         : Fundamental Pemograman\n");
    printf("\t\t\t\t Deskripsi           : Program ini menentukan Luas Persegi Panjang\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    
    // Input panjang dan lebar
    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    // Memanggil fungsi untuk menghitung luas
    int luas = hitungLuasPersegiPanjang(panjang, lebar);

    // Menampilkan hasil
    printf("Luas persegi panjang adalah: %d\n", luas);

    return 0;
}

