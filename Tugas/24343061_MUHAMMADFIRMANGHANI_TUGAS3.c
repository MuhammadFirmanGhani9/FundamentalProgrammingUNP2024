#include <stdio.h>

// Fungsi rekursif untuk Menara Hanoi
void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", asal, tujuan);
        return;
    }
    hanoi(n - 1, asal, bantu, tujuan);
    printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, asal, tujuan);
    hanoi(n - 1, bantu, tujuan, asal);
}

int main() {
    int cakram;
    printf("________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t Nama                : Muhammad Firman Ghani\n");
    printf("\t\t\t\t NIM                 : 24343061\n");
    printf("\t\t\t\t Prodi               : Informatika\n");
    printf("\t\t\t\t Tugas               : Tugas 3 Program C dengan fungsi Parameter dan Rekursif\n");
    printf("\t\t\t\t Mata Kuliah         : Fundamental Pemograman\n");
    printf("\t\t\t\t Deskripsi           : Program menara hanoi\n");
    printf("________________________________________________________________________________________________________________________\n\n");

    // Meminta input jumlah cakram dari pengguna
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &cakram);

    // Menghitung jumlah langkah yang diperlukan untuk menyelesaikan Menara Hanoi
    int langkah = (1 << cakram) - 1; // (2^cakram - 1)
    printf("Kamu perlu %d langkah untuk menyelesaikan game ini\n", langkah);

    // Panggil fungsi rekursif untuk Menara Hanoi
    printf("Langkah-langkah untuk memindahkan %d cakram: \n", cakram);
    hanoi(cakram, 'A', 'C', 'B'); // 'A' adalah tiang asal, 'C' adalah tiang tujuan, 'B' adalah tiang bantu
    
    return 0;
}

