#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;

    scanf("%lf %lf", &A, &B);

    C = sqrt((B * B) - (A * A));

    printf("\n"
           "Alas = %g cm \n"
           "Tinggi = %g cm \n"
           "Keliling = %g cm \n"
           "Luas = %g cm^2\n",
           C, A, (A + B + C), (0.5 * C * A)
    );
    return 0;
}