#include <stdio.h>

int main() {
    int mes;
    printf("Introduce numericamente un mes: ");
    scanf("%d",&mes);
    switch (mes) {
        case 1:
            printf("--- ENERO ---\n31 dias");
            break;
        case 2:
            printf("--- FEBRERO ---\n28 dias (29 dias los anios bisiestos, anios mulitplos de 4 desde el 2000)");
            break;
        case 3:
            printf("--- MARZO ---\n31 dias");
            break;
        case 4:
            printf("--- ABRIL ---\n30 dias");
            break;
        case 5:
            printf("--- MAYO ---\n31 dias");
            break;
        case 6:
            printf("--- JUNIO ---\n30 dias");
            break;
        case 7:
            printf("--- JULIO ---\n31 dias");
            break;
        case 8:
            printf("--- AGOSTO ---\n31 dias");
            break;
        case 9:
            printf("--- SEPTIEMBRE ---\n30 dias");
            break;
        case 10:
            printf("--- OCTUBRE ---\n31 dias");
            break;
        case 11:
            printf("--- NOVIEMBRE ---\n30 dias");
            break;
        case 12:
            printf("--- DICIEMBRE ---\n31 dias");
            break;
    }
    return 0;
}
