#include <iostream>
using namespace std;

int main(){
    int angka1 = 0;
    int angka2 = 1;
    int jumlah;
    cout << "Masukan jumlah: ";
    cin >> jumlah;
    // cout << "Fibbonaci ke 1 = 0"<<endl;
    // cout << "Fibbonaci ke 2 = 1"<<endl;

    for(int i = 0; i < jumlah ; i++){

        int hasil = angka1 + angka2;
        cout << "Fibbonaci ke-"
             << i + 1
             << "= "
             << angka1<<endl;
        angka1 = angka2;
        angka2 = hasil;
        
    }

}