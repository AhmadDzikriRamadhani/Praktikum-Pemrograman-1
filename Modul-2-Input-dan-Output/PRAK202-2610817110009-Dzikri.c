#include <stdio.h>

int main() {
    float Nilai_1, Nilai_2, Hasil_Penjumlahan;

    printf("Masukkan Nilai 1: ");
    scanf("%f", &Nilai_1);
    printf("Masukkan Nilai 2: ");
    scanf("%f", &Nilai_2);

    Hasil_Penjumlahan = Nilai_1 + Nilai_2;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", 
           Nilai_1, Nilai_2, Hasil_Penjumlahan);
    return 0;
}