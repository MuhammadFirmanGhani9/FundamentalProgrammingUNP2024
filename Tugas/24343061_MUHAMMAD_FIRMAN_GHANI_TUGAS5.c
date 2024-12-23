/* 	Nama File		: Tugas 5.c
	Programmer		: Muhammad Firman Ghani/ 24343061
	Tgl. pembuatan	: Jumat, 15 November 2024
	Deskripsi		: Program manajemen restoran implementasi struct
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisi struct untuk menyimpan informasi pesanan
struct Pesanan {
    char namaMakanan[50];
    int jumlah;
    float harga;
    struct Pesanan *next;
};

// Fungsi untuk menambah pesanan
struct Pesanan* tambahPesanan(struct Pesanan *head) {
    struct Pesanan *newPesanan = (struct Pesanan*) malloc(sizeof(struct Pesanan));
    if (newPesanan == NULL) {
        printf("Memori tidak cukup!\n");
        return head;
    }

    // Input pesanan dari pengguna
    printf("Masukkan nama makanan: ");
    fgets(newPesanan->namaMakanan, 50, stdin);
    newPesanan->namaMakanan[strcspn(newPesanan->namaMakanan, "\n")] = '\0'; //Menghapus newline
    printf("Masukkan jumlah: ");
    scanf("%d", &newPesanan->jumlah);
    printf("Masukkan harga per unit: ");
    scanf("%f", &newPesanan->harga);
    getchar(); // Membersihkan karakter newline dari input

    // Mengatur pointer ke pesanan berikutnya
    newPesanan->next = head;
    printf("Pesanan berhasil ditambahkan!\n");

    return newPesanan;
}

// Fungsi untuk menampilkan daftar pesanan
void tampilkanPesanan(struct Pesanan *head) {
    struct Pesanan *current = head;
    if (current == NULL) {
        printf("Tidak ada pesanan.\n");
        return;
    }

    printf("\n--- Daftar Pesanan ---\n");
    while (current != NULL) {
        printf("Nama Makanan: %s\n", current->namaMakanan);
        printf("Jumlah: %d\n", current->jumlah);
        printf("Harga: %.2f\n", current->harga);
        printf("----------------------\n");
        current = current->next;
    }
}

// Fungsi untuk menghapus pesanan
struct Pesanan* hapusPesanan(struct Pesanan *head, char *namaMakanan) {
    struct Pesanan *current = head;
    struct Pesanan *prev = NULL;

    while (current != NULL && strcmp(current->namaMakanan, namaMakanan) != 0) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Pesanan tidak ditemukan.\n");
        return head;
    }

    // Menghapus pesanan
    if (prev == NULL) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current); // Mengembalikan memori
    printf("Pesanan '%s' telah dihapus.\n", namaMakanan);

    return head;
}

// Fungsi untuk menghitung total pendapatan
void hitungTotalPendapatan(struct Pesanan *head) {
    struct Pesanan *current = head;
    float totalPendapatan = 0;

    while (current != NULL) {
        totalPendapatan += current->jumlah * current->harga;
        current = current->next;
    }

    printf("Total Pendapatan: %.2f\n", totalPendapatan);
}

// Fungsi untuk mengedit pesanan
void editPesanan(struct Pesanan *head, char *namaMakanan) {
    struct Pesanan *current = head;

    while (current != NULL && strcmp(current->namaMakanan, namaMakanan) != 0) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Pesanan tidak ditemukan.\n");
        return;
    }

    // Edit jumlah dan harga
    printf("Pesanan ditemukan. Masukkan data baru.\n");
    printf("Masukkan jumlah baru: ");
    scanf("%d", &current->jumlah);
    printf("Masukkan harga baru: ");
    scanf("%f", &current->harga);
    getchar(); // Membersihkan karakter newline
    printf("Pesanan berhasil diperbarui!\n");
}

int main() {
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
    printf("\t\t\t\t  NIM                 : 24343061\n");
    printf("\t\t\t\t  Prodi               : Informatika\n");
    printf("\t\t\t\t  Tugas               : Tugas 5\n");
    printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemrograman\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Program manajemen restoran implementasi struct\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    
    struct Pesanan *pesananList = NULL;
    int pilihan;
    char namaMakanan[50];

    do {
        // Menu utama
        printf("\nSelamat Datang! Silakan pilih opsi berikut untuk melanjutkan\n\n");
        printf("1. Tambah Pesanan\n");
        printf("2. Tampilkan Semua Pesanan\n");
        printf("3. Hapus Pesanan\n");
        printf("4. Hitung Total Harga\n");
        printf("5. Edit Pesanan\n");
        printf("6. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);
        getchar(); // Membersihkan karakter newline

        switch (pilihan) {
            case 1:
                pesananList = tambahPesanan(pesananList);
                break;
            case 2:
                tampilkanPesanan(pesananList);
                break;
            case 3:
                printf("Masukkan nama makanan yang akan dihapus: ");
                fgets(namaMakanan, 50, stdin);
                namaMakanan[strcspn(namaMakanan, "\n")] = '\0'; // Menghapus newline
                pesananList = hapusPesanan(pesananList, namaMakanan);
                break;
            case 4:
                hitungTotalPendapatan(pesananList);
                break;
            case 5:
                printf("Masukkan nama makanan yang akan diedit: ");
                fgets(namaMakanan, 50, stdin);
                namaMakanan[strcspn(namaMakanan, "\n")] = '\0'; // Menghapus newline
                editPesanan(pesananList, namaMakanan);
                break;
            case 6:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 6);

    // Menghapus semua pesanan dan membebaskan memori sebelum keluar
    while (pesananList != NULL) {
        struct Pesanan *temp = pesananList;
        pesananList = pesananList->next;
        free(temp);
    }

    return 0;
}
