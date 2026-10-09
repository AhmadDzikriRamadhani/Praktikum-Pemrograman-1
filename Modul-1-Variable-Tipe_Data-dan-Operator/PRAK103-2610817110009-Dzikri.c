#include <stdio.h>

int main() {
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    float Hasil = (a + b) * x / y;

    printf("Variabel a bernilai %.0f \n", a);
    printf("Variabel b bernilai %.0f \n", b);
    printf("Variabel x bernilai %.0f \n", x);
    printf("Variabel y bernilai %.0f \n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", Hasil);

    return 0;
}