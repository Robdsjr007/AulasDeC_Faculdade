#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    float capital_inicial, taxa_juros_anual, saldo_investimento;
    int anos, t;
    setlocale(LC_ALL, "portuguese");

    printf("Digite a capital inicial: ");
    scanf("%f", &capital_inicial);

    printf("Digite a taxa de juros anual: ");
    scanf("%f", &taxa_juros_anual);

    printf("Periodo em anos: ");
    scanf("%d", &anos);

    taxa_juros_anual = taxa_juros_anual / 100;

    saldo_investimento = capital_inicial;

    for (t = 1; t <= anos; t++) {
        saldo_investimento = saldo_investimento * (1 + taxa_juros_anual);
        printf("Saldo depois de %d ano(s): %.2f\n", t, saldo_investimento);
    }

    return 0;
}
