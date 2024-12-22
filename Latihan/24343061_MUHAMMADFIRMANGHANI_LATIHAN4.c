/* Nama File          : Tugas 4.C
   Programmer         : Muhammad Firman Ghani / 24343061
   Tanggal Pengkodean : Jumat, 18 Oktober 2024
   Deskripsi          : Program ini menentukan sebuah bilangan yang dinputkan apakah berupa bilangan ganjil atau
                        genap.
*/  

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int bilangan, sisaBagi;
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
	printf("\t\t\t\t  NIM                 : 24343061\n");
	printf("\t\t\t\t  Prodi               : Informatika\n");
	printf("\t\t\t\t  Tugas               : Tugas Modul 4\n");
	printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemograman\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t Program ini ganjil atau genap\n");
	printf("________________________________________________________________________________________________________________________\n\n");
    // Input bilangan
    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    // Proses menghitung sisa bagi, jika sisa bagi == 0 maka bilangan genap
    sisaBagi = bilangan % 2;

    // Proses pengecekan dengan if/else dan output hasilnya
    if (sisaBagi == 1) {
        // Jika sisa bagi 1, bilangan ganjil
        printf("Bilangan %d merupakan bilangan ganjil.\n", bilangan);
    } else {
        // Jika tidak, bilangan genap
        printf("Bilangan %d merupakan bilangan genap.\n", bilangan);
    }

    return 0;
}
