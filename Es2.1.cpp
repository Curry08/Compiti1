#include<stdio.h>

int main() {
    printf("CALCOLO MEDIA\n");
    float a,b,media;
    printf("Inserisci primo numero:");
    scanf("%f",&a);
    printf("Inserisci secondo numero:");
    scanf("%f",&b);
    media=(a+b)/2;
    printf("La media è %f",media);
    return 0;
}