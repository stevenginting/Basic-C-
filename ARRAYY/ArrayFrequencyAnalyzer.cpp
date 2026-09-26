#include <iostream>
#include <array>
using namespace std;

int main(){
    int nilai[10];
    int panjang = 10;
    
    //Masukkan input nilai array
    for(int i = 0; i < panjang; i++){
        cout << "Masukkan nilai ke-"<< i + 1 << ": ";
        cin >> nilai[i];
        
    }

    //Ambil nilai salah satu array
    for(int i =0; i < panjang; i++){
        int angka = nilai[i];
        bool sudahDihitung = false;

        //Cek nilai k dari kiri ke kanan
        for(int k = 0; k < i; k++){
            if(nilai[k] == angka){
                sudahDihitung = true;
            }
           
        }
        //Cek nilai sudah dihitung
        if(sudahDihitung){
            continue;
        }
        int count = 0;
        for(int j = 0; j < panjang; j++){
            if(nilai[j] == angka){
                count++;
            }
        
        }
        cout << angka << " muncul " << count << " kali"<<endl;
    }
}