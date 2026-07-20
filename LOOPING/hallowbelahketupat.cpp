#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    // --- Bagian Atas (Termasuk Garis Tengah Penuh) ---
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == 1 || j == 1 || i == tinggi || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // --- Bagian Bawah ---
    for (int i = tinggi - 1; i >= 1; i--) {
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}