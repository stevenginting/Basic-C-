#include <iostream>
using namespace std;

int main(){
    int tinggi;
    int lebar;
    cout << "Masukkan tinggi dan lebar [x y]: ";
    cin >> tinggi >> lebar;

    for(int i =1; i <= tinggi; i++){
        for(int j = 1; j <= lebar; j++){
            cout << " * ";
        }
        cout << endl;
    }
}