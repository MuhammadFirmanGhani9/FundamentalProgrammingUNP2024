/*
    Nama File      : Latihan8.c 
    Programmer     : Muhammad Firman Ghani/24343061
    Tgl. pembuatan : Jumat, 15 November 2024
    Deskripsi      :  Program ini adalah implementasi konsep struct
*/
#include <stdio.h>
#include <string.h>

//defenisi tipe struct secara global
struct tanggal
{
  int hari, bulan, tahun;
};

struct mahasiswa
{
  char nama [30];
  int nim;
  struct tanggal tanggal_lahir;
};

// deklarasi variabel data_mahasiswa secara global
struct mahasiswa data_mahasiswa;

main(){
	printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Nama                : Muhammad Firman Ghani\n");                        
    printf("\t\t\t\t  NIM                 : 24343061\n");
    printf("\t\t\t\t  Prodi               : Informatika\n");
    printf("\t\t\t\t  Tugas               : Latihan 8\n");
    printf("\t\t\t\t  Mata Kuliah         : Fundamental Pemrograman\n");
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t  Program ini adalah implementasi konsep struct\n");
    printf("________________________________________________________________________________________________________________________\n\n");
  // mengisi data kedalam variabel struct data_mahasiswa
  strcpy(data_mahasiswa.nama, "Muhammad Firman Ghani");
  data_mahasiswa.nim = 24343061;
  data_mahasiswa.tanggal_lahir.hari = 27;
  data_mahasiswa.tanggal_lahir.bulan = 12;
  data_mahasiswa.tanggal_lahir.tahun = 2005;

  // menampilkan data dalam struct data_mahasiswa
  printf("Nama Mahasiswa: %s\n", data_mahasiswa.nama);
  printf("Nomer Induk Mahasiswa: %d\n", data_mahasiswa.nim);
  printf("Tanggal Lahir: %d-%d-%d\n", data_mahasiswa.tanggal_lahir.hari,
         data_mahasiswa.tanggal_lahir.bulan,
         data_mahasiswa.tanggal_lahir.tahun);
}
