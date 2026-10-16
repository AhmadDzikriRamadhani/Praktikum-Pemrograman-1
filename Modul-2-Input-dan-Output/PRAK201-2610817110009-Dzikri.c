#include <stdio.h>

int main() {
    char Nama[100];
    char NIM[100];
    char Kelas[100];
    char Kelas_Paralel[100];
    char Tempat_Tanggal_Lahir[100];
    char Alamat[100];
    char Hobby[100];
    char No_HP[20];

    printf("Nama: ");
    scanf(" %[^\n]", Nama);
    printf("NIM: ");
    scanf(" %[^\n]", NIM);
    printf("Kelas: ");
    scanf(" %[^\n]", Kelas);
    printf("Kelas Paralel: ");
    scanf(" %[^\n]", Kelas_Paralel);
    printf("Tempat/Tanggal Lahir: ");
    scanf(" %[^\n]", Tempat_Tanggal_Lahir);
    printf("Alamat: ");
    scanf(" %[^\n]", Alamat);
    printf("Hobby: ");
    scanf(" %[^\n]", Hobby);
    printf("No. HP: ");
    scanf(" %[^\n]", No_HP);

    printf("\n"
        "Nama                 : %s\n"
        "NIM                  : %s\n"
        "Kelas Paralel        : %s\n"
        "Tempat/Tanggal Lahir : %s\n"
        "Alamat               : %s\n"
        "Hobby                : %s\n"
        "No. HP               : %s",
        Nama, NIM, Kelas_Paralel, Tempat_Tanggal_Lahir, Alamat, Hobby, No_HP
    );
    return 0;
}