#include <iostream>
using namespace std;

int main(){
    int tinggi = 0;
    cout << "Masukan nilai tinggi: ";
    cin >> tinggi;
    
    for(int i = 1; i <= tinggi; i++){
        for(int j = tinggi; j >= i; j--){
            cout << "* ";
        }
        cout << endl;
    }
}