#include <stdio.h>

int main() {
    int jumlah_pasukan = 958730;
    int jumlah_pahlawan = 5;

    int jumlah_dikalahkan = jumlah_pasukan / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d \n", jumlah_pasukan);
    printf("Jumlah pahlawan = %d \n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", jumlah_dikalahkan);

    return 0;
}