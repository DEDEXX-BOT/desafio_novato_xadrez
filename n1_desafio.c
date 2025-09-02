#include <stdio.h>

typedef struct {
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

void ler_carta(Carta *c) {
    printf("Populacao: ");
    scanf("%lu", &c->populacao);
    printf("Area (km²): ");
    scanf("%f", &c->area);
    printf("PIB (bilhoes): ");
    scanf("%f", &c->pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c->pontos_turisticos);
}

void calcular(Carta *c) {
    c->densidade = (c->area > 0) ? (float)c->populacao / c->area : 0;
    c->pib_per_capita = (c->populacao > 0) ? (c->pib * 1000000000.0f) / c->populacao : 0;
    c->super_poder = (float)c->populacao + c->area + c->pib + c->pontos_turisticos + c->pib_per_capita;
    if (c->densidade > 0)
        c->super_poder += 1.0f / c->densidade;
}

void comparar(const char *nome, float a, float b, int menor_vence) {
    int venceu = menor_vence ? (a < b) : (a > b);
    printf("%s: Carta %d venceu (%d)\n", nome, venceu ? 1 : 2, venceu ? 1 : 0);
}

int main() {
    Carta c1, c2;

    printf("Carta 1:\n");
    ler_carta(&c1);
    calcular(&c1);

    printf("\nCarta 2:\n");
    ler_carta(&c2);
    calcular(&c2);

    printf("\nComparação de Cartas:\n");
    comparar("População", c1.populacao, c2.populacao, 0);
    comparar("Área", c1.area, c2.area, 0);
    comparar("PIB", c1.pib, c2.pib, 0);
    comparar("Pontos Turísticos", c1.pontos_turisticos, c2.pontos_turisticos, 0);
    comparar("Densidade Populacional", c1.densidade, c2.densidade, 1);
    comparar("PIB per Capita", c1.pib_per_capita, c2.pib_per_capita, 0);
    comparar("Super Poder", c1.super_poder, c2.super_poder, 0);

    return 0;
}