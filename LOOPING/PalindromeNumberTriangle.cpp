#include <iostream>
using namespace std;

int main(){
    int tinggi;
    cout << "Masukkan Tinggi: ";
    cin >> tinggi;

    for(int i = 1; i <= tinggi; i++){
        for (int j = 1; j <= tinggi - i; j++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        for (int j = i -1 ; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}