#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userChoice;

    char* win = "      ___________\n"
        "     '._==_==_=_.'\n"
        "     .-\\:      /-.\n"
        "    | (|:.     |) |\n"
        "     '-|:.     |-' \n"
        "       \\::.    /\n"
        "        '::. .'\n"
        "          ) (\n"
        "        _.' '._\n"
        "       `\"\"\"\"\"\"\"`\n";

    printf("Welkom bij het DONKERE SCHATTEN AVONTUUR...\n\n");

    printf("Je wordt wakker voor een mysterieus kasteel midden in de nacht.\n");
    printf("De donder slaat in... er klopt iets niet.\n\n");

    printf("Optie 1. Ga het kasteel binnen\n");
    printf("Optie 2. Verken het bos\n");
    printf("Maak je keuze (1 of 2):\n");

    scanf_s("%d", &userChoice);

    // KASTEEL PAD
    if (userChoice == 1) {
        printf("\nJe opent langzaam de deur... hij kraakt hard.\n");
        printf("Binnen zie je een gang en een trap.\n\n");

        printf("Optie 1. Loop door de donkere gang\n");
        printf("Optie 2. Ga naar boven\n");
        scanf_s("%d", &userChoice);

        if (userChoice == 1) {
            printf("\nDe gang wordt donkerder... je hoort gefluister.\n");
            printf("Plots zie je een gesloten kist en een sleutel op tafel.\n\n");

            printf("Optie 1. Open de kist\n");
            printf("Optie 2. Negeer het en loop verder\n");
            scanf_s("%d", &userChoice);

            if (userChoice == 1) {
                printf("\nDe kist gaat open... JE HEBT DE SCHAT GEVONDEN!!!\n\n");
                printf("%s", win);
            }

            if (userChoice == 2) {
                printf("\nEr verschijnt een spook achter je... GAME OVER\n");
            }
        }

        if (userChoice == 2) {
            printf("\nBoven vind je een spiegel.\n");
            printf("Je spiegelbeeld glimlacht ineens naar je...\n");
            printf("Je zit voor altijd vast. GAME OVER\n");
        }
    }

    // BOS PAD
    if (userChoice == 2) {
        printf("\nJe loopt het bos in. Het is stil... te stil.\n");
        printf("Je ziet een grot en een klein huisje.\n\n");

        printf("Optie 1. Ga de grot in\n");
        printf("Optie 2. Klop op de deur van het huisje\n");
        scanf_s("%d", &userChoice);

        if (userChoice == 1) {
            printf("\nIn de grot zie je gloeiende symbolen.\n");
            printf("Je stapt naar voren en valt in een val... GAME OVER\n");
        }

        if (userChoice == 2) {
            printf("\nEen oude man doet open.\n");
            printf("Hij geeft je een kaart naar de schat!\n\n");

            printf("Optie 1. Volg de kaart\n");
            printf("Optie 2. Negeer de kaart\n");
            scanf_s("%d", &userChoice);

            if (userChoice == 1) {
                printf("\nDe kaart leidt je veilig naar de schat!\n\n");
                printf("%s", win);
            }

            if (userChoice == 2) {
                printf("\nJe raakt verdwaald in het bos... GAME OVER\n");
            }
        }
    }

    return 0;
}