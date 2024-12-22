#include <stdio.h>

// Fungsi untuk menghitung faktorial secara rekursif
int hitungFaktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * hitungFaktorial(n - 1);
    }
}

int main() {
    printf("________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t Nama                : Muhammad Firman Ghani\n");
    printf("\t\t\t\t NIM                 : 24343061\n");
    printf("\t\t\t\t Prodi               : Informatika\n");
    printf("\t\t\t\t Tugas               : Hitung Faktorial\n");
    printf("\t\t\t\t Mata Kuliah         : Fundamental Pemograman\n");
    printf("\t\t\t\t Deskripsi           : Program ini menghitung Faktorial\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    
    int n;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    // Validasi input untuk memastikan hanya bilangan bulat positif yang diterima
    if (n < 0) {
        printf("Faktorial tidak dapat dihitung untuk bilangan negatif.\n");
    } else {
        // Memanggil fungsi dan menampilkan hasil
        int faktorial = hitungFaktorial(n);
        printf("Faktorial dari %d adalah: %d\n", n, faktorial);
    }
    
    return 0;
}

