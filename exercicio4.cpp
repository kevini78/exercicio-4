#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    double maior, meio, menor;

    if (A >= B && A >= C) {
        maior = A;
        if (B >= C) {
            meio = B;
            menor = C;
        } else {
            meio = C;
            menor = B;
        }
    } else if (B >= A && B >= C) {
        maior = B;
        if (A >= C) {
            meio = A;
            menor = C;
        } else {
            meio = C;
            menor = A;
        }
    } else {
        maior = C;
        if (A >= B) {
            meio = A;
            menor = B;
        } else {
            meio = B;
            menor = A;
        }
    }

    printf("Valores em ordem descendente: %lf, %lf, %lf\n", maior, meio, menor);

    return 0;
}