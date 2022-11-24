#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "tictactoe.h"

int main() {
	char turn = 'X', board[2][2];
	bool game = true;
	int turn_count = 0;
	int valid = 1;
	int i, j;
	
	while (game) {
		for (i = 0; i<=2; i++){
			for (j = 0; j<=2; j++){
				board[i][j] = "-";
			}
		}
		display_table(board);
		insert(board, &turn, &valid);
		turn_count++;
		//We check for a win
		if (check_win(board)) {
			display_table(board);
			printf("%c Wins!!!", turn);
			getch();
			exit(0);
		}
		//We check for a draw
		if (check_draw(turn_count)) {
			display_table(board);
			printf("Draw!!!");
			getch();
			exit(0);
		}
		sw_turn(&turn);
	}
}