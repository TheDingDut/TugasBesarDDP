#include <stdio.h>
#include <conio.h>
#include "main.h"

int main()
{
    int opsi, opsiDimensi;
    char pemain1[50], pemain2[50];

    cetakCover();
    cetakMenu();
    printf("Pilih Opsi Menu \t: ");
    scanf("%d", &opsi);
    switch (opsi)
    {
    case 1:
        printf("Input Nama Pemain 1 \t: ");
        scanf("%s", &pemain1);
        printf("Input Nama Pemain 2 \t: ");
        scanf("%s", &pemain2);
        break;
    case 2:
        cetakMenu2();
        printf("Pilih Opsi Dimensi \t: ");
        scanf("%d", &opsiDimensi);
    case 99:
        system("cls");
        printf("+----------------------------------+\n");
        printf("|                                  |\n");
        printf("|               TERIMA             |\n");
        printf("|               KASIH              |\n");
        printf("|                                  |\n");
        printf("+----------------------------------+\n");
        break;
    default:
        system("cls");
        printf("\nInvalid Input");
        getchar();
        break;
    }
}