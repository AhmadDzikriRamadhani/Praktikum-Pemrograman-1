#include <stdio.h>

int main() {
    int jumlah_putaran = 5;
    int jarak_total = 14;
    float phi = 3.14f;

    float jari_jari = ((float)jarak_total / jumlah_putaran) / (2 * phi);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran \n", jumlah_putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer \n\n", jarak_total);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f\n", jari_jari);

    return 0;
}