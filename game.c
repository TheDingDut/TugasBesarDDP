#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "tictactoe.h"

int main()
{
	char turn = 'X', board[][] = {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
	char pemain1[50] = "Pemain 1", pemain2[50] = "Pemain 2";
	bool game = true;
	int turn_count = 0, valid = 1, opsi, opsidimensi;

	cover();
	system("cls");
	menu();
	printf("Pilih Opsi \t: ");
	scanf("%d", &opsi);
	switch (opsi)
	{
	case 1:
		dimensionOption();
		printf("Pilih Opsi \t: ");
		scanf("%d", &opsidimensi);
		switch (opsidimensi)
		{
		case 3:
			while (game)
			{
				display_table(board);
				insert(board, &turn, &valid);
				turn_count++;
				// We check for a win
				if (check_win(board))
				{
					display_table(board);
					printf("%c Wins!!!", turn);
					getch();
					exit(0);
				}
				// We check for a draw
				if (check_draw(turn_count))
				{
					display_table(board);
					printf("Draw!!!");
					getch();
					exit(0);
				}

				if (valid == 1)
				{
					sw_turn(&turn);
				}
				break;
			}
		}
		break;
	case 2:
		printf("\nMasukkan Nama Pemain 1 \t: ");
		scanf("%s", pemain1);
		printf("Masukkan Nama Pemain 2 \t: ");
		scanf("%s", pemain2);

		int count = strlen(pemain1);
		int count1 = strlen(pemain2);

		printf("\nPemain 1 \t\t: ");
		for (int i = 0; i < count; i++)
		{
			printf("%c", pemain1[i]);
		}

		printf("\nPemain 2 \t\t: ");
		for (int i = 0; i < count1; i++)
		{
			printf("%c", pemain2[i]);
		}
		break;
	default:
		break;
	}
}