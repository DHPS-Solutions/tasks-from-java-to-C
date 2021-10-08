#include <stdio.h>

int main(){
    char valg;
    int fraEllerTil = 0;

    printf("Enter a number:");    
    printf("\n");
    printf("Din valuta er Norske Kroner");
    printf("\n");
    printf("1. Nok til Dollar");
    printf("\n");
    printf("2. Nok til Euro");
    printf("\n");
    printf("3. Nok til Sek");
    printf("\n");
    printf("4. Exit");
    printf("\n");
    
    do
    {
        printf("=============================================================");
        printf("\n");
        printf("Velg en oppgave");
        printf("\n");
        printf("=============================================================");
        printf("\n");
        scanf("%c", &valg);
        printf("\n");
        float pengeSum;
        float pengerEtterOmgjoering;
        switch (valg)
        {
        case '1':
            printf("Tast 1 for Dollar til Nok");
            printf("\n");
            printf("Tast 2 for Nok til Dollar");
            printf("\n");
            scanf("%d",&fraEllerTil);
            printf("--------------------------------------");
            printf("Amerikanske Dollar");
            printf("--------------------------------------");
            printf("\n");
            scanf("%f",&pengeSum);
            if (fraEllerTil == 1) {
                pengerEtterOmgjoering = pengeSum * 8.66;
                printf("%f %s %f %s", pengeSum, " usd = ", pengerEtterOmgjoering,  " nok");
                printf("\n");

            }
            else if (fraEllerTil == 2) {
                pengerEtterOmgjoering = pengeSum / 8.66;
                printf("%f %s %f %s", pengeSum, " nok = ", pengerEtterOmgjoering,  " usd");
                printf("\n");
            }
        break;

        case '2':
            printf("Tast 1 for EURO til Nok");
            printf("\n");
            printf("Tast 2 for Nok til EURO");
            printf("\n");
            scanf("%d",&fraEllerTil);
            printf("--------------------------------------");
            printf("EURO");
            printf("--------------------------------------");
            printf("\n");
            scanf("%f",&pengeSum);
            if (fraEllerTil == 1) {
                pengerEtterOmgjoering = pengeSum * 10.28;
                printf("%f %s %f %s", pengeSum, " euro = ", pengerEtterOmgjoering,  " nok");
                printf("\n");
            }
            else if (fraEllerTil == 2) {
                pengerEtterOmgjoering = pengeSum / 10.28;
                printf("%f %s %f %s", pengeSum, " nok = ", pengerEtterOmgjoering,  " euro");
                printf("\n");
            }
        break;

        case '3':
            printf("Tast 1 for Sek til Nok");
            printf("\n");
            printf("Tast 2 for Nok til Sek");
            printf("\n");
            scanf("%d",&fraEllerTil);
            printf("--------------------------------------");
            printf("Svenske Kroner");
            printf("--------------------------------------");
            printf("\n");
            scanf("%f",&pengeSum);
            if (fraEllerTil == 1) {
                pengerEtterOmgjoering = pengeSum * 0.99;
                printf("%f %s %f %s", pengeSum, " sek = ", pengerEtterOmgjoering,  " nok");
                printf("\n");

            }
            else if (fraEllerTil == 2) {
                pengerEtterOmgjoering = pengeSum / 0.99;
                printf("%f %s %f %s", pengeSum, " nok = ", pengerEtterOmgjoering,  " sek");
                printf("\n");
            }
        break;

        case '4':
            printf("-------------------------------------------------");
            printf("\n");
            printf("Avsluttet");
            printf("\n");
        break;
        
        default:
            break;
        }
    } while (valg != '4');
        printf("Takk for at du brukte vår tjeneste!");
        printf("\n");
}