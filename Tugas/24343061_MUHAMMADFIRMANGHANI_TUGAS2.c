/* Nama File          : Latihan2.C
   Programmer         : Muhammad Firman Ghani / 24343061
   Tanggal Pengkodean : Jumat, 18 Oktober 2024
   Deskripsi          : Program tebak angka
*/  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angka, tebakan, jumlahTebakan, batasKesempatan = 5, maxRange;
    int pilihanMenu;

    // Menginisialisasi fungsi pembangkit angka acak
    srand(time(0));

    // Menampilkan menu pilihan tingkat kesulitan
    printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
	printf("\t\t\t\t  NIM                 : 24343061\n");
	printf("\t\t\t\t  Prodi               : Informatika\n");
	printf("\t\t\t\t  Tugas               : Latihan 2\n");
	printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemograman\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("\t\t\t\t  Program tebak angka\n");
	printf("________________________________________________________________________________________________________________________\n\n");
    printf("Pilih tingkat kesulitan dan rentang angkanya:\n\n");
    printf("1. Easy (dari 1 - 9)\n");
    printf("2. Normal (dari 1 - 45)\n");
    printf("3. Hard (dari 1 - 99)\n");
    printf("4. Insane (dari 1 - 270)\n\n");
    printf("Masukkan pilihan (ketik 1/2/3/4): ");
    scanf("%d", &pilihanMenu);

    // Memilih tingkat kesulitan berdasarkan input pengguna
    switch(pilihanMenu) {
        case 1:
            maxRange = 9;
            printf("Anda memilih Easy. Ini akan cepat berlalu.\n");
            break;
        case 2:
            maxRange = 45;
            printf("Anda memilih Normal. Wajar saja untuk seorang manusia.\n");
            break;
        case 3:
            maxRange = 99;
            printf("Anda memilih Hard. Sebaiknya siapkan tissue, anda akan menangis karena kesusahan.\n");
            break;
        case 4:
            maxRange = 270;
            printf("Anda memilih Insane. Berdoalah agar kesulitan game ini tidak mengorbankan waktu tidurmu >:).\n");
            break;
        default:
            printf("Pilihan tidak valid, keluar dari permainan.\n");
            return 0;
    }

    // Komputer memilih angka acak sesuai tingkat kesulitan
    angka = rand() % maxRange + 1;
    jumlahTebakan = 0;

    // Memulai permainan dengan batas kesempatan
    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);
        jumlahTebakan++;

        if (tebakan > angka) {
            printf("Tebakan Anda terlalu tinggi!\n");
        } else if (tebakan < angka) {
            printf("Tebakan Anda terlalu rendah!\n");
        } else {
            printf("Selamat! Anda berhasil menebak angka dengan benar!\n");
            printf("Anda menebak angka dalam %d kali percobaan.\n", jumlahTebakan);
            return 0;
        }

        if (jumlahTebakan >= batasKesempatan) {
            printf("Kesempatan habis! Anda gagal menebak angka yang benar.\n");
            printf("Angka yang benar adalah: %d\n", angka);
            return 0;
        }

        printf("Tebak dengan benar, sisa kesempatanmu hanya %d lagi!\n", batasKesempatan - jumlahTebakan);
    } while (tebakan != angka);

    return 0;
}

