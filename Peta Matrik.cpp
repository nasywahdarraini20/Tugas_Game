#include <iostream>
#include <conio.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main() {
    // Game pokemon
    int panjangPeta = 20; // x
    int lebarPeta = 15; // y
    
    int posisiKarakterY = 15;
    int posisiKarakterX = 4;
    
    cout << "Karakter ada di y:" << posisiKarakterY << ", x:" << posisiKarakterX << "\n";
    
    int peta[lebarPeta][panjangPeta] = {
        {6,6,6,6,6,6,6,6,6,1,1,6,6,6,6,6,6,6,6,6},
        {6,6,6,6,6,6,6,6,6,1,1,1,1,1,1,1,1,1,1,1},
        {6,6,6,6,6,6,6,6,6,1,1,6,6,6,6,6,6,6,6,6},
        {6,6,6,1,1,1,1,1,1,1,1,6,6,6,6,6,6,6,6,6},
        {1,6,6,6,6,6,6,1,1,1,1,6,6,6,6,6,6,6,6,6},
        {1,1,6,6,6,6,6,1,1,1,1,6,6,6,6,6,6,6,6,6},
        {1,1,1,1,1,1,1,1,1,1,1,6,6,6,6,6,6,6,6,6},
        {1,1,1,3,3,1,1,1,1,1,2,2,2,2,2,2,2,1,1,1},
        {1,1,1,3,3,1,1,1,2,2,2,2,2,2,2,2,5,5,5,5},
        {1,1,3,3,1,1,1,1,2,2,2,2,2,2,2,2,2,1,1,1},
        {1,1,3,3,1,1,1,1,2,2,2,1,1,2,2,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1},
    };
    
    
    int arrowKey = 0;
    
    /*
    #define KEY_UP 72
    #define KEY_DOWN 80
    #define KEY_LEFT 75
    #define KEY_RIGHT 77
    */
    
    while(1) {
        // Input Keyboard
        cout << "Masukan arrow key ";
        cin >> arrowKey;
        cout << "Arrow key yang dimasukan " << arrowKey << "\n";
        
        // Aturan menggerakkan karakter ke atas
        if(arrowKey == 72 && (peta[posisiKarakterY-1][posisiKarakterX] == 1 || peta[posisiKarakterY-1][posisiKarakterX] == 4) && posisiKarakterY >= 0) {
            // Gerakkan karakter ke atas
            posisiKarakterY = posisiKarakterY-1;
        }
        
        // Aturan menggerakkan karakter ke bawah
        if(arrowKey == 80 && (peta[posisiKarakterY+1][posisiKarakterX] == 1 || peta[posisiKarakterY+1][posisiKarakterX] == 4) && posisiKarakterY < lebarPeta) {
            // Gerakkan karakter ke atas
            posisiKarakterY = posisiKarakterY+1;
        }
        
        // Aturan menggerakkan karakter ke kiri
        if(arrowKey == 75 && (peta[posisiKarakterY][posisiKarakterX-1] == 1 || peta[posisiKarakterY][posisiKarakterX-1] == 4) && posisiKarakterX >= 0) {
            // Gerakkan karakter ke atas
            posisiKarakterX = posisiKarakterX-1;
        }
        
        // Aturan menggerakkan karakter ke kanan
        if(arrowKey == 77 && (peta[posisiKarakterY][posisiKarakterX+1] == 1 || peta[posisiKarakterY][posisiKarakterX+1] == 4) && posisiKarakterX < panjangPeta) {
            // Gerakkan karakter ke atas
            posisiKarakterX = posisiKarakterX+1;
        }
        
        // Render grafik
        for(int y=0; y<lebarPeta; y++) {
            for(int x=0; x<panjangPeta; x++) {
                
                if(posisiKarakterX == x && posisiKarakterY == y) {
                    cout << 0 << " ";
                } else {
                    cout << peta[y][x] << " ";
                }
            }
            cout << "\n";
        }
    }
     
    getch();
    return 0;
}
