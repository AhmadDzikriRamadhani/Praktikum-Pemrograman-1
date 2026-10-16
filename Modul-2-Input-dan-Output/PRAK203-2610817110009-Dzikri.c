#include <stdio.h>

int main() {
    float angka[6];
    int count = 0;

    while (count < 6) {
        if (scanf("%f", &angka[count]) == 1) {
            count++;
        }
    }

    float a = angka[0],
        b = angka[1],
        i = angka[2],
        j = angka[3],
        x = angka[4],
        y = angka[5];

    printf("\n%.3f\n", (a - b) * i / j - (x + y));
    return 0;
}