#include <iostream>
using namespace std;

int main(){
    int tinggi;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    for(int i = 1; i <= tinggi; i++){
        for(int j = 1; j <= tinggi - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 2; i <=tinggi; i++){
        for(int j = 1; j <= i - 1; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2 *(tinggi - i) + 1; j++){
            cout <<"*";
        }
        cout << endl;
    }
}