#include <stdio.h>

int main() {
    double pi = 22.0 / 7.0;
    double r, t;

    scanf("%lf %lf", &r, &t);

    double volume = pi * (r * r) * t;
    double luas_permukaan = 2 * pi * r * (r + t);
    double keliling_alas = 2 * pi * r;

    printf("\n"
           "Volume = %.2f\n"
           "Luas = %.2f\n"
           "Keliling = %.2f\n",
           volume, luas_permukaan, keliling_alas
    );
    return 0;
}