#include <iostream>
using namespace std;

int main(){
    int angka = 1;
    int tinggi;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++){
        for (int j = 1; j <= i; j++){
            cout << angka << " ";
            angka++;
        }
        cout << endl;
    }
}