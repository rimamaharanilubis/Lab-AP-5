#include <iostream>
using namespace std;

int main() {
    int rows, i, j, space;

    cout << "Masukkan jumlah baris (harus ganjil): ";
    cin >> rows;

    if (rows % 2 == 0) {
        cout << "Jumlah baris harus ganjil." << endl;
        return 0;
    }

    int midRow = (rows + 1) / 2;

    // Cetak bagian atas diamond
    for (i = 1; i <= midRow; i++) {
        // Cetak spasi
        for (space = 1; space <= midRow - i; space++) {
            cout << " ";
        }

        // Cetak bintang
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Cetak bagian bawah diamond
    for (i = midRow - 1; i >= 1; i--) {
        // Cetak spasi
        for (space = 1; space <= midRow - i; space++) {
            cout << " ";
        }

        // Cetak bintang
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}