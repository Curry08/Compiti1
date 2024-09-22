#include<stdio.h>

int main() {
    printf("CALCOLO AREA TRIANGOLO\n");
    float base,altezza,area;
    printf("Inserisci valore base:");
    scanf("%f",&base);
    printf("Inserisci valore altezza:");
    scanf("%f",&altezza);
    area=(base*altezza)/2;
    printf("L'area del triangolo è %f",area);
    return 0;
}