#include<stdio.h>

int main() {
    printf("CALCOLO DIFFERENZA TRA ORARI\n");
    int ora1,ora2,min1,min2,sec1,sec2,diff;
    printf("Inserisci primo orario [Ore/Min/Sec]:");
    scanf("%d",&ora1);
    scanf("%d",&min1);
    scanf("%d",&sec1);
    printf("Inserisci secondo orario [Ore/Min/Sec]:");
    scanf("%d",&ora2);
    scanf("%d",&min2);
    scanf("%d",&sec2);
    ora1=ora1*3600;
    ora2=ora2*3600;
    min1=min1*60;
    min2=min2*60;
    diff=(ora1+min1+sec1)-(ora2+min2+sec2);
    printf("La differenza in secondi è %d",diff);
    return 0;
}