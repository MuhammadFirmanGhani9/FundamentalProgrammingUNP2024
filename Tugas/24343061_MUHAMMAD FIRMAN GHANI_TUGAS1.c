/* Nama : Muhammad Firman Ghani
   NIM : 24343061
   Tugas : 24343061_MUHAMMAD FIRMAN GHANI_TUGAS1.c 
*/

#include <stdio.h>
int main() {
    // Deklarasi Variabel
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    int lulus;
    
    // Input nilai dari pengguna
    printf("Masukkan nilai tugas (0-100):");
    scanf("%f", &nilaiTugas); fflush(stdin);
    printf("Masukkan nilai UTS (0-100):");
    scanf("%f", &nilaiUTS); fflush(stdin);
    printf("Masukkan nilai UAS (0-100):");
    scanf("%f", &nilaiUAS); fflush(stdin);
    
    // Hitung nilai nilai akhir
    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);
    
    // Penentuan kelulusan
    lulus = (nilaiAkhir >= 60) && (nilaiUAS >= 50);
    
    // Output
    printf("\n Nilai Akhir Anda Adalah : %.2f\n", nilaiAkhir);
    
    if (lulus) {
    printf("Selamat Anda Lulus");
    } else {
    printf("Maaf, Anda Tidak Lulus");
    }
    return 0;

}
