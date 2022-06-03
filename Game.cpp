#include <stdio.h>
using namespace std;

int main() {
    /**************************
        Deklarasi variabel
        row : variabel baris
        col : variabel kolom
        board : variabel matriks 2D (papan catur)
        i, j : variabel loop
    ***************************/
    int row, col, i, j;

    printf("Program Membuat Papan Catur");
    printf("\n*****************************\n");

    //input variabel row & col dari user
    printf("\nPanjang : "); scanf("%i", &row);
    printf("Lebar   : "); scanf("%i", &col);
    printf("\n");

    char board[row][col];
    // inisialisasi elemen papan catur
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(i % 2== 0) {
                if(j % 2 != 0) {
                    board[i][j] = ' ';
                }else{
                    board[i][j] = 219;
                }
            }else{
                if(j % 2 == 0) {
                    board[i][j] = ' ';
                }else{
                    board[i][j] = 219;
                }
            }
        }
    }

    // cetak (akses) papan catur
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}

