#include <stdio.h>

int main() {
    int Harga_sepatu_A = 400000;
    int Harga_sepatu_B = 350000;

    int Diskon_A = Harga_sepatu_A - (Harga_sepatu_A * 13 / 100);
    int Diskon_B = Harga_sepatu_B - (Harga_sepatu_B * 21 / 100);

    printf("Harga sepatu A adalah %d \n", Harga_sepatu_A);
    printf("Harga sepatu B adalah %d \n", Harga_sepatu_B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d \n", Diskon_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", Diskon_B);

    return 0;
}