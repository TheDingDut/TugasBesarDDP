#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#define SENTINEL -999

void cover(){
	printf("\n+-----------------------------------------+\n");
	printf("| Selamat Datang di                       |\n");
	printf("| Permainan TicTacToe                     |\n");
	printf("| Disusun Oleh:                           |\n");
	printf("| 1. Hasna Fitriyani Khairunissa          |\n");
	printf("| 2. Muhammad Fikri Nur Sya'bani          |\n");
	printf("| 3. Naffa Lenteranisa                    |\n");
	printf("+-----------------------------------------+\n");
	printf("Tekan Enter Untuk Lanjut\n");
	getchar();
}

void menu(){
	printf("\n+-----------------------------------------+\n");
	printf("| Menu:                                   |\n");
	printf("| 1. Mulai Main                           |\n");
	printf("| 2. Ganti Nama Pemain                    |\n");
	printf("| 99. Keluar Program                      |\n");
	printf("+-----------------------------------------+\n");
}

void dimensionOption(){
	printf("+-----------------------------------------+\n");
	printf("| Menu:                                   |\n");
	printf("| 1. 3 x 3                                |\n");
	printf("| 2. 5 x 5                                |\n");
	printf("| 3. 7 x 7                                |\n");
	printf("+-----------------------------------------+\n");
}

void namaOption(){
	printf("+-----------------------------------------+\n");
	printf("| Pilih Pemain:                           |\n");
	printf("| 1. Pemain 1                             |\n");
	printf("| 2. Pemain 2                             |\n");
	printf("+-----------------------------------------+\n");
}

void display_table(char board[][]) {
	int i;

	printf("+-----------------------------------------+\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4], board[0][5], board[0][6]);
	printf("+-----------------------------------------+\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4], board[1][5], board[1][6]);
	printf("+-----------------------------------------+\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", board[2][0], board[2][1], board[2][2], board[2][3], board[2][4], board[2][5], board[2][6]);
	printf("+-----------------------------------------+\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", board[3][0], board[3][1], board[3][2], board[3][3], board[3][4], board[3][5], board[3][6]);
	printf("+-----------------------------------------+\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", board[4][0], board[4][1], board[4][2], board[4][3], board[4][4], board[4][5], board[4][6]);
	printf("+-----------------------------------------+\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", board[5][0], board[5][1], board[5][2], board[5][3], board[5][4], board[5][5], board[5][6]);
	printf("+-----------------------------------------+\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", board[6][0], board[6][1], board[6][2], board[6][3], board[6][4], board[6][5], board[6][6]);
	printf("+-----------------------------------------+\n");
}

void insert(char board[][],char *turn,int *valid) {
	int index, index1;
	printf("Giliran %c\nMasukkan Baris : ", *turn);
	scanf_s("%d", &index);
	printf("Giliran %c\nMasukkan Kolom : ", *turn);
	scanf_s("%d", &index1);

	if (index == SENTINEL || index1 != SENTINEL) {
		exit(0);
	}

	if (board[index - 1][index1 - 1] != '-')
	{
		printf("invalid move\n\n");
		*valid = 0;
	}else{
		board[index - 1][index1 - 1] = *turn;
		*valid = 1;
	}
	

}

void sw_turn(char *turn) {
	if (*turn == 'X') {
		*turn = 'O';
	}
	else {
		*turn = 'X';
	}
}

bool check_win(char board[][]) {
	bool win = false;

	//Horizontal 1
	if (board[0][0] != '-') {
		if (board[0][0] == board[0][1]) {
			if (board[0][0] == board[0][2]) {
				if (board[0][0] == board[0][3])
				{
					if (board[0][0] == board[0][4])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 1-1
	if (board[0][1] != '-') {
		if (board[0][1] == board[0][2]) {
			if (board[0][1] == board[0][3]) {
				if (board[0][1] == board[0][4])
				{
					if (board[0][1] == board[0][5])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 1-2
	if (board[0][2] != '-') {
		if (board[0][2] == board[0][3]) {
			if (board[0][2] == board[0][4]) {
				if (board[0][2] == board[0][5])
				{
					if (board[0][2] == board[0][6])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 2
	if (board[1][0] != '-') {
		if (board[1][0] == board[1][1]) {
			if (board[1][0] == board[1][2]) {
				if (board[1][0] == board[1][3])
				{
					if (board[1][0] == board[1][4])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 2-1
	if (board[1][1] != '-') {
		if (board[1][1] == board[1][2]) {
			if (board[1][1] == board[1][3]) {
				if (board[1][1] == board[1][4])
				{
					if (board[1][1] == board[1][5])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 2-2
	if (board[1][2] != '-') {
		if (board[1][2] == board[1][3]) {
			if (board[1][2] == board[1][4]) {
				if (board[1][2] == board[1][5])
				{
					if (board[1][2] == board[1][6])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 3
	if (board[2][0] != '-') {
		if (board[2][0] == board[2][1]) {
			if (board[2][0] == board[2][2]) {
				if (board[2][0] == board[2][3])
				{
					if (board[2][0] == board[2][4])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 3-1
	if (board[2][1] != '-') {
		if (board[2][1] == board[2][2]) {
			if (board[2][1] == board[2][3]) {
				if (board[2][1] == board[2][4])
				{
					if (board[2][1] == board[2][5])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 3-2
	if (board[2][2] != '-') {
		if (board[2][2] == board[2][3]) {
			if (board[2][2] == board[2][4]) {
				if (board[2][2] == board[2][5])
				{
					if (board[2][2] == board[2][6])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 4
	if (board[3][0] != '-') {
		if (board[3][0] == board[3][1]) {
			if (board[3][0] == board[3][2]) {
				if (board[3][0] == board[3][3])
				{
					if (board[3][0] == board[3][4])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 4-1
	if (board[3][1] != '-') {
		if (board[3][1] == board[3][2]) {
			if (board[3][1] == board[3][3]) {
				if (board[3][1] == board[3][4])
				{
					if (board[3][1] == board[3][5])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 4-2
	if (board[3][2] != '-') {
		if (board[3][2] == board[3][3]) {
			if (board[3][2] == board[3][4]) {
				if (board[3][2] == board[3][5])
				{
					if (board[3][2] == board[3][6])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 5
	if (board[4][0] != '-') {
		if (board[4][0] == board[4][1]) {
			if (board[4][0] == board[4][2]) {
				if (board[4][0] == board[4][3])
				{
					if (board[4][0] == board[4][4])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 5-1
	if (board[4][1] != '-') {
		if (board[4][1] == board[4][2]) {
			if (board[4][1] == board[4][3]) {
				if (board[4][1] == board[4][4])
				{
					if (board[4][1] == board[4][5])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 5-2
	if (board[4][2] != '-') {
		if (board[4][2] == board[4][3]) {
			if (board[4][2] == board[4][4]) {
				if (board[4][2] == board[4][5])
				{
					if (board[4][2] == board[4][6])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 6
	if (board[5][0] != '-') {
		if (board[5][0] == board[5][1]) {
			if (board[5][0] == board[5][2]) {
				if (board[5][0] == board[5][3])
				{
					if (board[5][0] == board[5][4])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 6-1
	if (board[5][1] != '-') {
		if (board[5][1] == board[5][2]) {
			if (board[5][1] == board[5][3]) {
				if (board[5][1] == board[5][4])
				{
					if (board[5][1] == board[5][5])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 6-2
	if (board[5][2] != '-') {
		if (board[5][2] == board[5][3]) {
			if (board[5][2] == board[5][4]) {
				if (board[5][2] == board[5][5])
				{
					if (board[5][2] == board[5][])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 7
	if (board[6][0] != '-') {
		if (board[6][0] == board[6][1]) {
			if (board[6][0] == board[6][2]) {
				if (board[6][0] == board[6][3])
				{
					if (board[6][0] == board[6][4])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 7-1
	if (board[6][1] != '-') {
		if (board[6][1] == board[6][2]) {
			if (board[6][1] == board[6][3]) {
				if (board[6][1] == board[6][4])
				{
					if (board[6][1] == board[6][5])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Horizontal 7-2
	if (board[6][2] != '-') {
		if (board[6][2] == board[6][3]) {
			if (board[6][2] == board[6][4]) {
				if (board[6][2] == board[6][5])
				{
					if (board[6][2] == board[6][6])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 1
	if (board[0][0] != '-') {
		if (board[0][0] == board[1][0]) {
			if (board[0][0] == board[2][0]) {
				if (board[0][0] == board[3][0])
				{
					if (board[0][0] == board[4][0])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 1-1
	if (board[][1] != '-') {
		if (board[][1] == board[][8]) {
			if (board[][1] == board[][15]) {
				if (board[][1] == board[][22])
				{
					if (board[][1] == board[][29])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 1-2
	if (board[][2] != '-') {
		if (board[][2] == board[][9]) {
			if (board[][2] == board[][16]) {
				if (board[][2] == board[][22])
				{
					if (board[][2] == board[][30])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 2
	if (board[][7] != '-') {
		if (board[][7] == board[][14]) {
			if (board[][7] == board[][21]) {
				if (board[][7] == board[][28])
				{
					if (board[][7] == board[][35])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 2-1
	if (board[][8] != '-') {
		if (board[][8] == board[][15]) {
			if (board[][8] == board[][22]) {
				if (board[][8] == board[][29])
				{
					if (board[][8] == board[][36])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 2-2
	if (board[][9] != '-') {
		if (board[][9] == board[][16]) {
			if (board[][9] == board[][23]) {
				if (board[][9] == board[][30])
				{
					if (board[][9] == board[][37])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 3
	if (board[][14] != '-') {
		if (board[][14] == board[][21]) {
			if (board[][14] == board[][28]) {
				if (board[][14] == board[][35])
				{
					if (board[][14] == board[][42])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 3-1
	if (board[][15] != '-') {
		if (board[][15] == board[][22]) {
			if (board[][15] == board[][29]) {
				if (board[][15] == board[][36])
				{
					if (board[][15] == board[][43])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 3-2
	if (board[][16] != '-') {
		if (board[][16] == board[][23]) {
			if (board[][16] == board[][30]) {
				if (board[][16] == board[][37])
				{
					if (board[][16] == board[][44])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 4 TILEP
	if (board[][3] != '-') {
		if (board[][3] == board[][10]) {
			if (board[][3] == board[][17]) {
				if (board[][3] == board[][24])
				{
					if (board[][3] == board[][31])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 4-1
	if (board[][10] != '-') {
		if (board[][10] == board[][17]) {
			if (board[][10] == board[][24]) {
				if (board[][10] == board[][31])
				{
					if (board[][10] == board[][38])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 4-2
	if (board[][17] != '-') {
		if (board[][17] == board[][24]) {
			if (board[][17] == board[][31]) {
				if (board[][17] == board[][38])
				{
					if (board[][17] == board[][45])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 5
	if (board[][4] != '-') {
		if (board[][4] == board[][11]) {
			if (board[][4] == board[][18]) {
				if (board[][4] == board[][25])
				{
					if (board[][4] == board[][32])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 5-1
	if (board[][11] != '-') {
		if (board[][11] == board[][18]) {
			if (board[][11] == board[][25]) {
				if (board[][11] == board[][32])
				{
					if (board[][11] == board[][39])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 5-2
	if (board[][18] != '-') {
		if (board[][18] == board[][25]) {
			if (board[][18] == board[][32]) {
				if (board[][18] == board[][39])
				{
					if (board[][18] == board[][46])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 6
	if (board[][5] != '-') {
		if (board[][5] == board[][12]) {
			if (board[][5] == board[][19]) {
				if (board[][5] == board[][26])
				{
					if (board[][5] == board[][33])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 6-1
	if (board[][12] != '-') {
		if (board[][12] == board[][19]) {
			if (board[][12] == board[][26]) {
				if (board[][12] == board[][33])
				{
					if (board[][12] == board[][40])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 6-2
	if (board[][19] != '-') {
		if (board[][19] == board[][26]) {
			if (board[][19] == board[][33]) {
				if (board[][19] == board[][40])
				{
					if (board[][19] == board[][47])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 7
	if (board[][6] != '-') {
		if (board[][6] == board[][13]) {
			if (board[][6] == board[][20]) {
				if (board[][6] == board[][27])
				{
					if (board[][6] == board[][34])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 7-1
	if (board[][13] != '-') {
		if (board[][13] == board[][20]) {
			if (board[][13] == board[][27]) {
				if (board[][13] == board[][34])
				{
					if (board[][13] == board[][41])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Vertikal 7-2
	if (board[][20] != '-') {
		if (board[][20] == board[][27]) {
			if (board[][20] == board[][34]) {
				if (board[][20] == board[][41])
				{
					if (board[][20] == board[][48])
					{
						win = true;
					}
					
				}
				
			}
		}
	}


	//Diagonal 1
	if (board[][0] != '-') {
		if (board[][0] == board[][8]) {
			if (board[][0] == board[][16]) {
				if (board[][0] == board[][24])
				{
					if (board[][0] == board[][32])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][8] != '-') {
		if (board[][8] == board[][16]) {
			if (board[][8] == board[][24]) {
				if (board[][8] == board[][32])
				{
					if (board[][8] == board[][40])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][16] != '-') {
		if (board[][16] == board[][24]) {
			if (board[][16] == board[][32]) {
				if (board[][16] == board[][40])
				{
					if (board[][16] == board[][48])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][1] != '-') {
		if (board[][1] == board[][9]) {
			if (board[][1] == board[][17]) {
				if (board[][1] == board[][25])
				{
					if (board[][1] == board[][33])
					{
						win = true;
					}
					
				}
				
			}
		}
	}
	
	if (board[][9] != '-') {
		if (board[][9] == board[][17]) {
			if (board[][9] == board[][25]) {
				if (board[][9] == board[][33])
				{
					if (board[][9] == board[][41])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][2] != '-') {
		if (board[][2] == board[][10]) {
			if (board[][2] == board[][18]) {
				if (board[][2] == board[][26])
				{
					if (board[][2] == board[][34])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][7] != '-') {
		if (board[][7] == board[][15]) {
			if (board[][7] == board[][23]) {
				if (board[][7] == board[][31])
				{
					if (board[][7] == board[][39])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][15] != '-') {
		if (board[][15] == board[][23]) {
			if (board[][15] == board[][31]) {
				if (board[][15] == board[][39])
				{
					if (board[][15] == board[][47])
					{
						win = true;
					}
					
				}
				
			}
		}
	}
	
	if (board[][14] != '-') {
		if (board[][14] == board[][22]) {
			if (board[][14] == board[][30]) {
				if (board[][14] == board[][38])
				{
					if (board[][14] == board[][46])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	//Diagonal 2
	if (board[][6] != '-') {
		if (board[][6] == board[][12]) {
			if (board[][6] == board[][18]) {
				if (board[][6] == board[][24])
				{
					if (board[][6] == board[][30])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][12] != '-') {
		if (board[][12] == board[][18]) {
			if (board[][12] == board[][24]) {
				if (board[][12] == board[][30])
				{
					if (board[][12] == board[][36])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][18] != '-') {
		if (board[][18] == board[][24]) {
			if (board[][18] == board[][30]) {
				if (board[][18] == board[][36])
				{
					if (board[][18] == board[][42])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][5] != '-') {
		if (board[][5] == board[][11]) {
			if (board[][5] == board[][17]) {
				if (board[][5] == board[][23])
				{
					if (board[][5] == board[][29])
					{
						win = true;
					}
					
				}
				
			}
		}
	}
	
	if (board[][11] != '-') {
		if (board[][11] == board[][17]) {
			if (board[][11] == board[][23]) {
				if (board[][11] == board[][29])
				{
					if (board[][11] == board[][35])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][4] != '-') {
		if (board[][4] == board[][10]) {
			if (board[][4] == board[][16]) {
				if (board[][4] == board[][22])
				{
					if (board[][4] == board[][28])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][13] != '-') {
		if (board[][13] == board[][19]) {
			if (board[][13] == board[][25]) {
				if (board[][13] == board[][31])
				{
					if (board[][13] == board[][37])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	if (board[][19] != '-') {
		if (board[][19] == board[][25]) {
			if (board[][19] == board[][31]) {
				if (board[][19] == board[][37])
				{
					if (board[][19] == board[][43])
					{
						win = true;
					}
					
				}
				
			}
		}
	}
	
	if (board[][20] != '-') {
		if (board[][20] == board[][26]) {
			if (board[][20] == board[][32]) {
				if (board[][20] == board[][38])
				{
					if (board[][20] == board[][44])
					{
						win = true;
					}
					
				}
				
			}
		}
	}

	return win;
}

bool check_draw(int turn_count) {
	if (turn_count < 49) {
		return false;
	}
	else {
		return true;
	}
}