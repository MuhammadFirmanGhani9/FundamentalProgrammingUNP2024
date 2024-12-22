#include <stdio.h>
// Fungsi untuk menghitung keliling lingkaran
 float hitungKelilingLingkaran (float jariJari) {
return 2 * 3.14 * jariJari;
}
int main()
{

float jariJari;

 	printf("________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t Nama                : Muhammad Firman Ghani\n");
    printf("\t\t\t\t NIM                 : 24343061\n");
    printf("\t\t\t\t Prodi               : Informatika\n");
    printf("\t\t\t\t Tugas               : Keliling Lingkaran\n");
    printf("\t\t\t\t Mata Kuliah         : Fundamental Pemograman\n");
    printf("\t\t\t\t Deskripsi           : Program ini menentukan Keliling Lingkaran\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    
	printf("Masukkan jari-jari lingkaran: ");
	scanf("%f", &jariJari);

// Memanggil fungsi dan menampilkan hasil
    float keliling = hitungKelilingLingkaran (jariJari);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);
	return 0;

}
